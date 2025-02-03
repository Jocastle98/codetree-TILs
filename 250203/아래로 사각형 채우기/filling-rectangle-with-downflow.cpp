#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int>(n));
    int cnt=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            v[j][i] = cnt;
            cnt++;
            
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