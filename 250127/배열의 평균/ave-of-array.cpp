#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    vector<vector<int>> v(2,vector<int>(4));
   
   cout.precision(1);
   cout<<fixed;

    float sum3=0; //전체
    for(int i=0; i<2; i++){
        float sum1=0; //가로
        for(int j=0; j<4; j++){
            cin>>v[i][j];
            sum1 += v[i][j];
           
         
        }
        cout<<sum1/4<<" ";
    }
    cout<<endl;
    for(int i=0; i<4; i++){
        float sum2 =0;
        for(int j=0; j<2; j++){
            sum2 += v[j][i];
        }
        cout<<sum2/2<<" ";
    }
    cout<<endl;

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            sum3 += v[i][j];
        }
    }
    cout<< sum3/8;
    return 0;
}