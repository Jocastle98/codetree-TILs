#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0; i<2*n; i++){
        cin>>arr[i];
    }
    int max=0;
    sort(arr,arr+2*n);
    // for(int i=0; i<2*n; i++){
    //     cout<<arr[i]<<" ";
    // }
    for(int i=0; i<2*n; i++){
        if(arr[i]+arr[2*n-i-1]>max){
            max = arr[i]+arr[2*n-i];
        }
    }
    cout<<max;
    return 0;
}