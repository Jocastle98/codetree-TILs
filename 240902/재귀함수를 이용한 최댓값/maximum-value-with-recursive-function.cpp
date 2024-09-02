#include <iostream>
#include <algorithm>
using namespace std;
#define max 100
int arr[max];

int fuc(int n){
    int max1 =arr[0];
    for(int i=1; i<n; i++){
        
        if(arr[i]>max1) max1=arr[i];
        
    }
    return max1;

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
    }
    cout<<fuc(n);
    return 0;
}