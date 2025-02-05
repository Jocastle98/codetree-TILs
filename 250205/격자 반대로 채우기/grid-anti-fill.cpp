#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));

    int num=1;
    if(n%2==0){
        for(int i=n-1; i>=0; i--){
        if(i%2==1){
            for(int j=n-1; j>=0; j--){
                v[j][i] = num++;
            }
        }
        else{
            for(int j=0; j<n; j++){
                v[j][i] = num++;
            }
        }
    }
    }
    else{
        for(int i=n-1; i>=0; i--){
        if(i%2==0){
            for(int j=n-1; j>=0; j--){
                v[j][i] = num++;
            }
        }
        else{
            for(int j=0; j<n; j++){
                v[j][i] = num++;
            }
        }
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