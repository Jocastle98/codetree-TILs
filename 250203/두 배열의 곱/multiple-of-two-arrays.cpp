#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    vector<vector<int>> v1(3,vector<int>(3));
    vector<vector<int>> v2(3,vector<int>(3));

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>v1[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>v2[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<v1[i][j] * v2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}