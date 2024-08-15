#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a;
    cin>>n;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i<10; i++){
        
        arr[i] *=n;
        if(arr[i]%5==0 or arr[i]%5 !=0){    
            cout<<arr[i]<<" ";
            if(arr[i]%5==0){
                a++;
            }
            if(a>=2){
                break;
            }
    
    }
    }
    return 0;
}