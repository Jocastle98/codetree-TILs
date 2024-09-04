#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sort(arr,arr+i+1);
        if(i%2==0){
            
            cout<<arr[(i/2)]<<" ";
            //cout<<(i/2)<<" ";
        }
    }
   
   
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
        
    //     if(i%2==0){
    //         sort(arr,arr+n);
    //         cout<<arr[(i/2)]<<" ";
    //         //cout<<(i/2)<<" ";
    //     }
    // }
    return 0;
}