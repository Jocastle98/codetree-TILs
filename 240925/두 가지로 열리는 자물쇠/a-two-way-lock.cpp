#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int a,b,c;//처음 조함
    int d,e,f;//두번째 조합
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    
    int ans =0;
    //자물쇠가 원형이므로 숫자 1과 N은 거리가 1이다.
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            for(int k=1; k<=n; k++){
                if(min(abs(a-i),n-abs(a-i))<=2 and min(abs(b-j),n-abs(b-j))<=2 and min(abs(c-k),n-abs(c-k))<=2 )
                {
                    ans++;
                }
                if(min(abs(d-i),n-abs(d-i))<=2 and min(abs(e-j),n-abs(e-j))<=2 and min(abs(f-k),n-abs(f-k))<=2 )
                {
                    ans++;
                }
                if(min(abs(a-i),n-abs(a-i))<=2 and min(abs(b-j),n-abs(b-j))<=2 and min(abs(c-k),n-abs(c-k))<=2 and min(abs(d-i),n-abs(d-i))<=2 and min(abs(e-j),n-abs(e-j))<=2 and min(abs(f-k),n-abs(f-k))<=2 )
                {
                    ans--;
                }
            }
        }
    }
    cout<<ans;

    return 0;
}