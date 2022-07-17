#include<iostream>
#include<vector>
using namespace std;

vector<int> a;
vector<int> b;

pair<int, int> arr[100001];
vector<pair<int, int>> conb[100001];
int solution(int N, vector<int> &A, vector<int> &B) {
   for(int i=0;i<A.size();i++){
        conb[i].push_back(make_pair(A[i],B[i]));
        arr[A[i]].first++;
        arr[B[i]].first++;
   }

   for(int i=0;i<N;i++){
    
   }
    
}

int main(){
    int n;
    cin>>n;

    int input;
    do {
        cin>>input;
        a.push_back(input);
    } while(getc(stdin)==' ');

        do {
        cin>>input;
        b.push_back(input);
    } while(getc(stdin)==' ');

    solution(n,a,b);


}