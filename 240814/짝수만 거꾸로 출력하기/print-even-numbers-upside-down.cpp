#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[n];
    cin>>n;

    for(int i=0; i<n; i++){
        
        cin>>arr[i];
      
    }
    for( int j=n-1; j>=0; j--){
        if(arr[j]%2==0){
            cout<<arr[j]<<" ";
        }
    }
    return 0;
}