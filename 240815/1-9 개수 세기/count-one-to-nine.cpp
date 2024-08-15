#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt[10]={0,};
    int n;
    cin>>n;
    int arr[100];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cnt[arr[i]]++;
       
    }
    for(int i=1; i<10; i++){
        cout<<cnt[i]<<endl;
    }
    
    return 0;
}