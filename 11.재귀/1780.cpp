#include<iostream>
using namespace std;

int result_minus1=0;
int result_0=0;
int result_1=0;
int arr[2200][2200];
int N;

void func(int a, int b, int n){
    for(int i=a;i<b;i++){
        for(int j=a;j<b-1;j++){
            cout<<arr[i][j]<<'\n';
            if(arr[i][j]!=arr[i][j+1]){
                if(arr[i][j]==-1)result_minus1++;
                else if(arr[i][j]==0)result_0++;
                else if(arr[i][j]==1)result_1++;

                for(int k=0;k<3;i++){
                    for(int l=0;l<3;l++){
                        func(n*k/3,n*l/3,n/3);
                    }
                }
            }
        }
    }
    if(arr[a][b-1]==-1)result_minus1++;
    else if(arr[a][b-1]==0)result_0++;
    else if(arr[a][b-1]==1)result_1++;
    return;
}

int main(){
ios::sync_with_stdio(0);

cin>>N;
for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        cin>>arr[i][j];
    }
}

func(0,N,N);
cout<<result_minus1<<'\n';
cout<<result_0<<'\n';
cout<<result_1<<'\n';

return 0;
}