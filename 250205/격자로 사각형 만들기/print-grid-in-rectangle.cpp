#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    vector<vector<int>>v(n,vector<int>(n));

    for(int i=0; i<n; i++){
        v[i][0] = v[0][i] = 1;
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            v[i][j] = v[i-1][j] + v[i][j-1]+ v[i-1][j-1];
        }
    }

    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}