# include<bits/stdc++.h>
using namespace std;

long long func(int a, int b, int m) {
    if(b==1) return a%m;
    long long val = func(a,b/2, m);
    val = val * val % m;
    if(b%2==0) return val;
    else return val* a % m;
}
int main(){
    long long a, b, m;

    cin>> a >> b >> m;

    cout<<func(a,b,m);

    return 0;
}