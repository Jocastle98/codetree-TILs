#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int  sum=0;
    int k;
    int arr[100];

    for(int i=0; i<100; i++){
        cin>>arr[i];
       
        if(arr[i]==0){
            k=i;
            break;

        }
        sum += arr[i];
    }

    cout<<arr[k-1]+arr[k-2]+arr[k-3];
    return 0;
}