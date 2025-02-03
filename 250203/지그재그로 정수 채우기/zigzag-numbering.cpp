#include <iostream>
#include <vector>
using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // Write your code here!
    vector<vector<int>> v(n,vector<int>(m));
    int num=0;
    for(int j=0; j<m; j++){
        if(j%2 ==0){
            for(int i=0; i<n; i++){
                v[i][j] = num;
                num++;
            }
        }
        else{
            for(int i=n-1; i>=0; i--){
                v[i][j] = num;
                num++;
            }
        }
    }
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
