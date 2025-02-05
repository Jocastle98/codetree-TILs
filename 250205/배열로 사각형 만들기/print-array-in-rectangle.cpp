#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    vector<vector<int>>v(5,vector<int>(5));
    for(int i=0; i<5; i++){
        v[i][0] =1;
        v[0][i] =1;
    }
    for(int i=1; i<5; i++){
        for(int j=1; j<5; j++){
            v[i][j] = v[i-1][j]+v[i][j-1];
        }
    }
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}