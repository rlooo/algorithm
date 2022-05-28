#include<bits/stdc++.h>
using namespace std;
int res[51];
int func2(int arr[], int N){

    fill(res,res+51,0);
    
    for(int i=0;i<N;i++){
        if(arr[i]>50){res[100-arr[i]]++;}
        else res[arr[i]]++;
    }
    for(int i=0;i<51;i++){
        if(res[i]>1) return 1;
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