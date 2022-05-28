#include<iostream>
using namespace std;
int result=0;
bool isused1[100];
bool isused2[100];
bool isused3[100];
int n;

void func(int k){
    if(k==n){
        result++;
        return;
    }
    for(int j=0;j<n;j++){
        if(!isused1[j]&&!isused2[k+j]&&!isused3[k-j+n-1]){
            isused1[j]=1;
            isused2[k+j]=1;
            isused3[k-j+n-1]=1;
            func(k+1);
            isused1[j]=0;
            isused2[k+j]=0;
            isused3[k-j+n-1]=0;
        }
    }
}
int main(){
    cin>>n;
    func(0);
    cout<<result<<'\n';
    return 0;
}