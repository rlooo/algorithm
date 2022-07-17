#include<iostream>
#include<vector>
using namespace std;


struct Point2D{
    int x;
    int y;

};

int solution(vector<Point2D> &A) {
    int result=0;
    double div_1, div_2;

    for(int i=0; i<A.size()-2; i++){
        for(int j=i+1;j<A.size()-1;j++){
            for(int k=j+1;k<A.size();k++){
                div_1 = (double)(A[j].y-A[i].y) / (double)(A[j].x-A[i].x);
                div_2 = (double)(A[k].y-A[j].y) / (double)(A[k].x-A[j].x);


                if(((A[j].x-A[i].x)==0)&&((A[k].x-A[j].x)==0)){result++;}
                else if(div_1==div_2) {result++;}
        }
    }
    
}
return result;
}

int main(){
    vector<Point2D> p; 
    Point2D point;

    int x,y;
    int i=0;

    do {
        cin>>x>>y;
        point.x=x;
        point.y=y;

        p.push_back(point);

        i++;
    } while(getc(stdin)==' ');

    cout<<solution(p)<<'\n';

    return 0;
}