#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int a,b;
    cin>>a>>b;
    arr[0] =a, arr[1]= b;
    cout<<arr[0]<<" "<<arr[1]<<" ";
    for(int i=2; i<10; i++){
        
        arr[i] = arr[i-1]+arr[i-2];
        cout<<arr[i]%10<<" ";
    }
    return 0;
}