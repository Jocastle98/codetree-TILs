#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[n];
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        arr[i] *=arr[i];
        
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}