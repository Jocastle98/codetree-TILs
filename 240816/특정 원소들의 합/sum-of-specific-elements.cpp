#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[4][4];
    int sum =0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1; i<2; i++){
        for(int j=0; j<2; j++){
            sum += arr[i][j];
        }
    }
    
    for(int i=2; i<3; i++){
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
    }
    
    for(int i=3; i<4; i++){
        for(int j=0; j<4; j++){
            sum += arr[i][j];
        }
    }
    cout<<sum+arr[0][0];
    return 0;
}