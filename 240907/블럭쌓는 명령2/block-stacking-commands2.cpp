#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin>>n>>k;
    int arr[n]={};
    for(int i=0; i<k;i++){
        int a,b;
        cin>>a>>b;
        for(int j=a-1; j<=b-1; j++){
            
                arr[j]+=1;
            
        }
    }
    int max=arr[0];
    for(int i=1; i<n; i++){
        
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}