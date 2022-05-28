/*
 * 야매연결리스트로 구현 
 * cursor 구현 부분 다시 보기
 */
#include<bits/stdc++.h>
using namespace std;
const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX]; 
int unused=1;

void insert(int addr, char data){
    dat[unused]=data;
    pre[unused]=pre[addr];
    nxt[pre[addr]]=unused;
    
    if(nxt[addr]!=-1){
        nxt[unused]=addr;
        pre[addr]=unused;
    }
    unused++;
}

void erase(int addr){
  nxt[pre[addr]]=nxt[addr];
  if(nxt[addr]!=-1) pre[nxt[addr]]=pre[addr];
}

void traversal(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur];
    cur = nxt[cur];
  }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M;
    int cursor=0;
    char command;
    char character;
    string input;

    cin>>input;

    for(int i=0;input[i];i++){
       insert(cursor, i);
       cursor++;
    }

    cin>>M;
    
    while(M--){
        cin>>command;
        if(command=='L'){
            if(cursor!=-1) cursor=pre[cursor]; 
        }
        else if(command=='D'){
            if(nxt[cursor]!=-1) cursor=nxt[cursor]; 
        }
        else if(command=='B'){
            if(cursor!=0) erase(cursor);cursor=pre[cursor];
        }
        else if(command=='P'){
            cin>>character;
            insert(cursor, character);
            cursor=nxt[cursor];
        }
    }

    traversal();

    return 0;
}