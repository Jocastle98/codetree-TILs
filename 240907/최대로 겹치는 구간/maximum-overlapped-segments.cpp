#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
     
    int arr[1000] = {0}; 

    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        // 선분이 시작하는 지점에서 +1
        arr[a]++;
        // 선분이 끝나는 지점에서 겹치지 않으므로 b에서 -1이 아니라 b-1에서 처리
        arr[b]--;

    }
    int max =0;
    int cur =0;
    for(int i=0; i<n; i++){
        cur +=arr[i];
        if(cur>max){
            max =cur;
        }
    }
    cout<<max;
    return 0;
}