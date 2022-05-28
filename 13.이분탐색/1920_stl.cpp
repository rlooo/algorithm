#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m;
    int target;
    
    cin>>n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n); // stl 쓸 때도 정렬 시켜줘야 함

    cin>>m;
    while(m--){
        cin>>target;
        cout<<binary_search(arr,arr+n,target)<<'\n';
    }
    return 0;
}