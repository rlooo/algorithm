#include<bits/stdc++.h>
using namespace std;

int func4(int N){
    int val = 1;
    while(2*val<=N) val*=2;
    return val;
}
int main(){
    int input;
    cin>>input;
    cout<<func4(input)<<'\n';
    return 0;
}