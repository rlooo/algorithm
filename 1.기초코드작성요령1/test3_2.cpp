#include<bits/stdc++.h>
using namespace std;

int func3(int N){
    for(int i=1;i*i<=N;i++){
        if(i*i==N) return 1;
    }
    return 0;
}
int main(){
    int input;
    cin>>input;
    cout<<func3(input)<<'\n';
    return 0;
}