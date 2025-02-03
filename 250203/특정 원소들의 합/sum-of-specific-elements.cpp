#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int sum =0;
    vector<vector<int>> v(4, vector<int>(4));

    for(int i=0; i<4; i++){
        for(int j= 0; j<4; j++){
            cin>>v[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<=i; j++){
            sum += v[i][j];
        }
    }
    cout<<sum;
    return 0;
}