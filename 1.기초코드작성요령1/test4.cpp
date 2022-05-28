#include<bits/stdc++.h>
using namespace std;

int func4(int N){
    int result;
    for(int i=1;2*i<=N;i=2*i){
        result=2*i;
    }
    return result;
}
int main(){
    int input;
    cin>>input;
    cout<<func4(input)<<'\n';
    return 0;
}