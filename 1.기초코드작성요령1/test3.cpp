#include<bits/stdc++.h>
using namespace std;

int func3(int N){
    if(sqrt(N)-int(sqrt(N))>0) return 0;
    else return 1;
}
int main(){
    int input;
    cin>>input;
    cout<<func3(input)<<'\n';
    return 0;
}