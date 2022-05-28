#include<iostream>
using namespace std;
int n,s;
int arr[21];
int sum;
int result;
bool isused[21];

void func(int k, int i){
    if(sum==s){result++;return;}
    if(k==n) return;


        sum+=arr[i];
        isused[i]=1;
        func(k+1, i+1);
        isused[i]=0;
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>s;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    func(0,0);
    cout<<result<<'\n';

    return 0;
}