#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int a[n];
    int cnt=1;
    int max=1;
    for(int i=0; i<n; i++){  
        cin>>a[i];  
    }
    for(int i=1; i<n; i++){
        if(a[i]==a[i-1]){
            cnt++;
        }
        else{
            if(cnt>max){
                max = cnt;
            }
            cnt =1;
        }
    }
    if(cnt>max){
        max = cnt;
    }
    cout<<max;
    return 0;
}