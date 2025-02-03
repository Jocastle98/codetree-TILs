#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;
    int cnt =1;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            v[i][j] = cnt;
            cnt++;
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}