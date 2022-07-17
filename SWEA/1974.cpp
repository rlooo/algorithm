#include<iostream>
using namespace std;
int arr[10][10];
int horizontal[10];
int vertical[10];
int box[10];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

	int test_case;
	int T, N;

    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case){
        //초기화
        for(int i=1;i<10;i++){
            horizontal[i]=0;
            vertical[i]=0;
            box[i]=0;        
        }

        //입력
        for(int i=1;i<10;i++){
            for(int j=1;j<10;j++){
                cin>>arr[i][j];
            }
        }

        //가로
        int check_horizontal=false;
        for(int i=1;i<10;i++){
            if(check_horizontal){break;}
            for(int i=1;i<10;i++){
                horizontal[i]=0;       
        }
            for(int j=1;j<10;j++){
                if(horizontal[arr[i][j]]>0){
                    check_horizontal=true;
                    break;
                }
                else {horizontal[arr[i][j]]++;}
            }
        }

        //세로
        int check_vertical=false;
        for(int j=1;j<10;j++){
            if(check_vertical){break;}
            for(int i=1;i<10;i++){
                vertical[i]=0;
        }
            for(int i=1;i<10;i++){
                if(vertical[arr[i][j]]>0){
                    check_vertical=true;
                    break;
                }
                else {vertical[arr[i][j]]++;}           
            }
        }

        //3*3 박스
        int check_box=false;
        for(int k=0;k<9;k+=3){
            for(int l=0;l<9;l+=3){
                if(check_box){break;}
                for(int i=1;i<10;i++){
                    box[i]=0;        
                }
                for(int i=1;i<4;i++){
                    for(int j=1;j<4;j++){
                        if(box[arr[k+i][l+j]]>0){
                            check_box=true;
                            break;
                        }
                        else {box[arr[k+i][l+j]]++;}
                    }
                }
            }
        }
        //출력
        cout<<'#'<<test_case<<' ';
        if(check_horizontal||check_vertical||check_box){cout<<0<<'\n';}
        else{cout<<1<<'\n';}
    }
    return 0;
}