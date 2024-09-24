#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,h,t;
    cin>>n>>h>>t; //n:발 높이 개수 h:기준 높이 t:기준 높이 만족 연속 개수 
    int arr[101]={0}; //높이 정보
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans =INT_MAX; //최소비용
    for(int i=0; i<=n-t; i++){
        int sum=0; //최소비용
        //일정 구간 
         // 구간 내의 밭 높이를 h로 맞추는 데 드는 비용 계산
        for(int j = i; j < i + t; j++){
            sum += abs(arr[j] - h);
        }

        ans = min(sum,ans);
    }
    cout<<ans;

    return 0;
}