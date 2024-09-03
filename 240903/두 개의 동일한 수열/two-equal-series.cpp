#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    cin>>n;
    int arr1[n], arr2[n];

    for(int i=0; i<n; i++){
        cin>>arr1[i];
        
    }
    
    for(int i=0; i<n; i++){
        cin>>arr2[i];
        
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    for(int i=0; i<n; i++){
        if(arr1[i]==arr2[i]){
            cnt++;
        }
    }
    if(cnt==n){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}