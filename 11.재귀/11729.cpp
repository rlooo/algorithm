#include<bits/stdc++.h>
using namespace std;
int result=0;
pair<int, int> p[10000000];
int i=0;
void func(int num, int a, int b){
    if(num==1) {
        p[i].first=a;
        p[i].second=b;
        i++;
        result++;
        return;
        }
    func(num-1,a,6-a-b);
    func(1,a,b);
    func(num-1,6-a-b,b);
}
int main(){
    ios::sync_with_stdio(0);
    int n;

    cin>>n;
    func(n,1,3);
    cout<<result<<'\n';
    for(int j=0;j<i;j++){
        cout<<p[j].first<<' '<<p[j].second<<'\n';
    }

    return 0;
}