#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[21][21]={0};
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int max_coin=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-2; j++){
            max_coin = max(max_coin,arr[i][j]+arr[i][j+1]+arr[i][j+2]);
        }
    }
    cout<<max_coin;
    return 0;
}