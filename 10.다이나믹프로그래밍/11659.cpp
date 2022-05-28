#include<iostream>
using namespace std;
int arr[100005];
int dp[100005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;

    int a,b;
    for(int i=1;i<=n;i++){cin>>arr[i];}

    dp[1]=arr[1];
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+arr[i];
    }

    for(int j=1;j<=m;j++){
        cin>>a>>b;
        cout<<dp[b]-dp[a-1]<<'\n';
    }

    return 0;
}