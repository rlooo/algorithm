#include<bits/stdc++.h>
using namespace std;
vector<int> v;    
int index(int n){
    int idx=0;
    cout<<n;
    while(n--){
        if(v[idx]==1) {
            idx++;
            if(idx==v.size()){idx=0;}
        }
        idx++;
        if(idx==v.size()){idx=0;}
    }
    v[idx]=1;
    return idx+1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
     
    int N;
    cin>>N;
    
    list<int> L; 

    int input;
    while(N--){
        cin>>input;
        L.push_back(input);
    }

    int dat;
    list<int>::iterator t = L.begin();
    int idx;
    while(!L.empty()){
        cout<<*t;
        dat=*t;
        t=L.erase(t); //반환값을 안받으면 나중에 t에 접근했을 때 무한루프 발생
        if(t == L.end()) t = L.begin();

        if(dat>0){
            for(int i=0;i<dat-1;i++){
                t++;
                if(t == L.end()) t = L.begin(); //주의: end()가 가리키고 있는 것은 맨 마지막 원소의 바로 다음번 원소
            }
            cout<<index(dat)<<' ';
        }

        else {
            for(int i=0;i<abs((int)L.size()-dat);i++){
                t++;       
                if(t == L.end()) t = L.begin(); 
            }
            cout<<index(abs((int)L.size()-dat))<<' ';
        }
    }
        

    return 0;
}