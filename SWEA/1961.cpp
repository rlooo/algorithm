#include<iostream>
using namespace std;
int arr[8][8];
int arr_90[8][8];
int arr_180[8][8];
int arr_270[8][8];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

	int test_case;
	int T, N;

    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case){
        cin>>N;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>arr[i][j];
            }
        }
        for(int j=0;j<N;j++){
            for(int i=N-1;i>=0;i--){
                arr_90[j][-(i-N+1)]=arr[i][j];
            }
        }

        for(int i=N-1;i>=0;i--){
            for(int j=N-1;j>=0;j--){
                arr_180[-(i-N+1)][-(j-N+1)]=arr[i][j];
            }

        }
        for(int j=N-1;j>=0;j--){
            for(int i=0;i<N;i++){
                arr_270[-(j-N+1)][i]=arr[i][j];
            }
        }
        cout << '#' << test_case << '\n';
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << arr_90[i][j];
            }
            cout << ' ';
            for (int j = 0; j < N; j++) {
                cout << arr_180[i][j];
            }
            cout << ' ';
            for (int j = 0; j < N; j++) {
                cout << arr_270[i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}