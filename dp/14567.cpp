#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
int dp[1005];

vector<int> adj[1001];
int indegree[1001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;

    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        indegree[b]++;
    }

    queue<int> q;
    for(int i=1;i<=n;i++){
        dp[i]=1;
        if(indegree[i]==0){q.push(i);}
    }

    int cur;
    while(!q.empty()){
        cur = q.front();q.pop();
        for(int nxt:adj[cur]){
            dp[nxt]=max(dp[cur]+1,dp[nxt]);
            indegree[nxt]--;
            if(indegree[nxt]==0){q.push(nxt);}
        }
    }

    for(int i=1;i<=n;i++){
        cout<<dp[i]<<' ';
    }
}