#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int  sum=0;
 
    int arr[1000];

    for(int i=0; i<1000; i++){
        cin>>arr[i];
       
        if(arr[i]==0){
            break;
        }
        sum += arr[i];
    }

    cout<<sum;
    return 0;
}