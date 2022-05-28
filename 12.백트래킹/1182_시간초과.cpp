#include<iostream>
using namespace std;
int n,s;
int arr[21];
int sum;
int result;
bool isused[21];

void func(int k){
    if(sum==s){result++;return;}
    if(k==n) return;

    for(int i=k+1;i<n;i++){
        sum+=arr[i];
        arr[k]=arr[i];
        isused[i]=1;
        func(k+1);
        isused[i]=0;
    }
}
int main(){
    cin>>n>>s;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    func(0);
    cout<<result<<'\n';

    return 0;
}