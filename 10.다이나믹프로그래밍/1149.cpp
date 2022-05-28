#include<iostream>
#include<algorithm>
using namespace std;

int n;
int arr[1005][3];
int dp[1005][3];
int result;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
        cin>>arr[i][j];
        }
    }

    dp[1][0]=arr[1][0];
    dp[1][1]=arr[1][1];
    dp[1][2]=arr[1][2];

    for(int k=2;k<=n;k++){
        dp[k][0]=min(dp[k-1][1],dp[k-1][2])+arr[k][0];
        dp[k][1]=min(dp[k-1][0],dp[k-1][2])+arr[k][1];
        dp[k][2]=min(dp[k-1][0],dp[k-1][1])+arr[k][2];
    }

    cout<<min({dp[n][0], dp[n][1], dp[n][2]})<<'\n';

    return 0;
}