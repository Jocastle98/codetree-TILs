#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[1000];
    int cnt =1, ans =1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        if(i>=1 and (arr[i]>arr[i-1])){
            cnt++;
        }
        else{
            cnt =1;
        }
        ans = max(ans,cnt);
    }
    cout<<ans;

    return 0;
}