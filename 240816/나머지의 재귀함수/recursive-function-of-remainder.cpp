#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[100];
    arr[0]=2;
    arr[1]=4;

    for(int i=2; i<n; i++){
        arr[i]= (arr[i-2]*arr[i-1])%100;
        
    }
    cout<<arr[n-1];
    return 0;
}