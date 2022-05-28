#include<iostream>
#include<algorithm>
#include<string>
#include<set>
#include<vector>

using namespace std;
int main(){
    int n,m;
    int result=0;
    vector<string> v;
    set<string> set;
    string input;

    cin>>n>>m;


    for(int i=0;i<n+m;i++){
        cin>>input;
        auto it = set.insert(input);
        if(!it.second){result++;v.push_back(input);}
    }
    sort(v.begin(), v.end());

    cout<<result<<'\n';
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<'\n';
        
    }
    
    
    return 0;
}

