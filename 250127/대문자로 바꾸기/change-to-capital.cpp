#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    vector<vector<char>> v(5, vector<char>(3));

    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            cin>>v[i][j];
            char uppercase = v[i][j] - 32;

            cout << uppercase << " ";
        }
        cout<<endl;
    }
    return 0;
}