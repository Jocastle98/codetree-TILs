#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[101]={0};
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int cnt =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(i<j and j<k and arr[i]<=arr[j] and arr[j]<= arr[k]){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;

    return 0;
}