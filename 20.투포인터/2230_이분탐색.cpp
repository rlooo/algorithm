#include<iostream>
#include<algorithm>
using namespace std;

int a[100005];
int n, m;
int result=2000000001;
void binarysearch(int k){
    int st = 0;
    int en = n-1;

    while(st<=en){
        int mid = (st+en)/2;
        if(a[mid] -k < m){
            st = mid+1;
        }
        else if(a[mid] - k > m){
            en = mid-1;
            result = min(result, a[mid]-k);
        }
        else {result = m; return;};
    }
    return; //st > en 일 경우 while문을 탈출
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);

    for(int i=0;i<n;i++){
        binarysearch(a[i]);
    }
    cout<<result;

    return 0;
}