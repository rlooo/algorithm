#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int n;
int binarysearch(int target){
    int st,en,mid;
    int count=0;
    st=0;
    en=n-1;
    while(st<=en){
        mid=(st+en)/2;
        if(target==arr[mid]){
            count++;
            if(target==arr[mid-1]){
                
            }
        }
        else if(target<arr[mid]){
            en=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m;
    int target;
    
    cin>>n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);

    cin>>m;
    while(m--){
        cin>>target;
        cout<<binarysearch(target)<<'\n';
    }
    return 0;
}