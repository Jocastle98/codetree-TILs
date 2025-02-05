#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
   
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            v[i][0] = 1;
            if(i>=1){
                v[i][j] = v[i-1][j-1]+v[i-1][j];
            }
            
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}