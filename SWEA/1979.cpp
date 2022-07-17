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
        int count_num;
        int result=0;
        cin>>N>>M;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<N;i++){
            count_num=0;
            for(int j=0;j<N;j++){
                if(arr[i][j]==0){
                    if(count_num==M)result++;
                    count_num=0;
                }else count_num++;
            }
            
            if(count_num==M){result++;}
        }
        
        for(int i=0;i<N;i++){
            count_num=0;
            for(int j=0;j<N;j++){
                if(arr[j][i]==0){
                    if(count_num==M)result++;
                    count_num=0;
                }else count_num++;
            }
            if(count_num==M){result++;}
        }

        cout<<"#"<<test_case<<' '<<result<<'\n';
    }

    return 0;
}