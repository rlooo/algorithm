#include<iostream>
using namespace std;
int arr[16][16];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

	int test_case;
	int T;
    int N,M;

    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case){
        int max_num=0;
        int result=0;
        cin>>N>>M;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>arr[i][j];
            }
        }
        for(int l=0;l<N-M+1;l++){
            for(int k=0;k<N-M+1;k++){
                result=0;
                for(int i=0;i<M;i++){
                    for(int j=0;j<M;j++){
                        result+=arr[i+l][j+k];
                    }
                }
                if(result>max_num){max_num=result;}
            }
        }
        

        cout<<"#"<<test_case<<' '<<max_num<<'\n';
    }

    return 0;
}