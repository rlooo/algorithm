#include<iostream>
#include<vector>
using namespace std;

int arr[1000001];
int solution(vector<int> &A) {
    for (auto iter = v.begin(); iter != v.end(); iter++) {
       if(*iter>0){
       arr[*iter]++;
       } 
    }

    for (int i=1;i<=1000000;i++) {
        if(arr[i]==0){return i;}
    }
}

int main(){
    int input;

    do {
        cin>>input;
        v.push_back(input);
    } while(getc(stdin)==' ');

    cout<<solution(v)<<'\n';

    return 0;
}