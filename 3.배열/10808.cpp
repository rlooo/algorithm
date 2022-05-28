#include<bits/stdc++.h>
using namespace std;
int arr[26];
int main(){
    string s;
    cin>>s;

    for(int i=0;s[i];i++){
        arr[s[i]-'a']++;
    }
    /*
    for(auto c:s){
        arr[c-'a']++;
    }
    */
    for(int i=0;i<26;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}