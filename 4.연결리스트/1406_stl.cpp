#include<bits/stdc++.h>
using namespace std;

int main(){
    int M;
    list<char> L;
    list<char>::iterator cursor=L.begin();
    char command;
    char character;
    string input;

    cin>>input;

    for(int i=0;input[i];i++){
        L.push_back(input[i]);
    }

    cin>>M;
    
    while(M--){
        cin>>command;
        if(command=='L'){
            if(cursor!=L.begin()) cursor--;
        }
        else if(command=='D'){
            if(cursor!=L.end()) cursor++;
        }
        else if(command=='B'){
            if(cursor!=L.begin()) cursor=L.erase(--cursor);
        }
        else if(command=='P'){
            cin>>character;
            L.insert(cursor, character);
        }
    }
    for (auto i:L){
        cout<<i;
    }

    return 0;
}