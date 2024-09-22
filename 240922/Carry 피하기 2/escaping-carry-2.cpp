#include <iostream>
#include <algorithm>

using namespace std;

bool noCarry(int a, int b, int c) {
    int carry = 0;
    while (a > 0 || b > 0 || c > 0) {
        int sum = a % 10 + b % 10 + c % 10 + carry;
        if (sum >= 10)
            return false;  // 자리 올림 발생
        carry = 0;  // 자리 올림이 없으므로 carry를 0으로 유지
        a /= 10;
        b /= 10;
        c /= 10;
    }
    return true;  // 모든 자리에서 자리 올림이 발생하지 않음
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[24] ={0};
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans =-1;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(noCarry(arr[i],arr[j],arr[k])){
                    sum = arr[i]+arr[j]+arr[k];
                    ans = max(ans , sum);

                }
            }
        }
    }
    cout<<ans;

    return 0;
}