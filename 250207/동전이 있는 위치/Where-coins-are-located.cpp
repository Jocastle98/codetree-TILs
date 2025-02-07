#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(n));

    for(int i=0; i<m; i++){
        int r,c;
        cin>>r>>c;
        v[r-1][c-1] = 1;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}