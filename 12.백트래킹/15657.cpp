#include<iostream>
#include<algorithm>

using namespace std;

int n,m;
int arr[10];
int arr2[10005];
bool isused[10005];

void func(int k){
    if(k==m){
        for(int i=0;i<m;i++){
            cout<<arr2[i]<<' ';
        }
        cout<<'\n';
        return;
    }

    for(int i=0;i<n;i++){
        if(arr2[k-1]<=arr[i]){
        arr2[k]=arr[i];
        func(k+1);
        }
    }

}

int main(){
    cin>>n>>m;

    for(int i=0;i<n;i++){cin>>arr[i];}

    sort(arr, arr+n);

    func(0);

    return 0;
}