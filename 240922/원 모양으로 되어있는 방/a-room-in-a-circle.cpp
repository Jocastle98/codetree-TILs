#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n; //방 개수
    int arr[101]={0}; //사람 수 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = INT_MAX;
    //사람수 x이동거리 = 총 이동거리
    //방 선택 지점 i
    for(int i=0; i<n; i++){
        int dis = 0;
        //이동거리 계산
        //j는 이동할 집
        for(int j=0; j<n; j++){

            if(j>=i)dis +=arr[j]*abs(i-j);//i번째 방 가야하는 사람 x i번째방과 j번째 방사이 거리
            
            else dis +=arr[j]*abs(n-j-1);
        }
        ans = min(ans,dis);
    }
    cout<<ans;

    return 0;
}