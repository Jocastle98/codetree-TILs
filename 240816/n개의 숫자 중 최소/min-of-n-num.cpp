#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[n];
    int min = arr[0];
    int cnt=0;

    for(int i=1; i<n; i++){
        cin>>arr[i];
        if(min>arr[i]){
            min= arr[i];
            
        }
    }
    for(int i=1; i<n; i++){
        if(min==arr[i]){
            cnt++;
        }
    }
    cout<<min<<" "<<cnt;
    return 0;
}