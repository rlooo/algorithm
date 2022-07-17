#include<iostream>
using namespace std;
int A[21];
int B[21];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

	int test_case;
	int T;
    int N,M;

    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case){
        long max_num=0;
        long result;

        cin>>N>>M;
        for(int i=0;i<N;i++){cin>>A[i];}
        for(int j=0;j<M;j++){cin>>B[j];}

        
        if(N<M){
            for(int j=0;j<M-N+1;j++){
                result=0;
                for(int i=0;i<N;i++){
                    result+=A[i]*B[i+j];
                }
                if(result>max_num){max_num=result;}
        }
        } 
        else {
            for(int j=0;j<N-M+1;j++){
                result=0;
                for(int i=0;i<M;i++){
                    result+=A[i+j]*B[i];
                }
                if(result>max_num){max_num=result;}
        }
        }
             cout<<"#"<<test_case<<' '<<max_num<<'\n';
    }

    return 0;
}