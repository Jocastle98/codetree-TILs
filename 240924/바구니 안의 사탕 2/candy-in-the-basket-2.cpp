#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin>>n>>k; //n: 바구니 개수 k: 구간의 범위 2k만큼 범위를 잡는다
    int candy[101]={0}; //바구니에 있는 사탕의 개수
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;//사탕 개수 바구니 위치
        candy[b] += a;
    }
    
    int ans =0;//최대 사탕 개수
    //중심점 찾기
    for(int c=0; c<=100; c++){
        int sum=0;
        int left = max(0,c-k); //중심점 기준 왼쪽
        int right = min(c+k, 100); //중심점 기준 오른쪽
        for(int j=left; j<=right; j++){
            sum+=candy[j];
        }
        ans = max(ans,sum);
    }
    cout<<ans;
    return 0;
}