#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int a=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    
        if(arr[i]==0){
            break;
        }
        ++a;
    }
    for(int i=a-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
   
    return 0;
}