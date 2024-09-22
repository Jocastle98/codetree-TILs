#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[103]={0};
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = INT_MIN;
    //처음 고르는 숫자 i
    for(int i=0; i<n; i++){
        int sum=0;
        //두번째 고르는 숫자 j
        for(int j=i+1; j<n; j++){
            
            if(j != i+1)sum =arr[i]+arr[j];
        }
        ans = max(sum,ans);
    }
    cout<<ans;
    return 0;
}