#include<bits/stdc++.h>
using namespace std;

int func2(int arr[], int N){
    int occur[101] = {};
    for(int i=0;i<N;i++){
        if(occur[100-arr[i]]==1) return 1;
        occur[arr[i]]=1;
    }
    return 0;
}
int main(){
    int test1[3]={1,52,48};
    int test2[2]={50,42};
    int test3[4]={4,13,63,87};

    cout<<func2(test1,3)<<'\n'; //1
    cout<<func2(test2,2)<<'\n'; //0
    cout<<func2(test3,4)<<'\n'; //1

    return 0;
}