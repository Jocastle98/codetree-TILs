#include <iostream>
using namespace std;
#define max 1000000
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int curA[max+1]={0},curB[max+1]={0};

    int timeA=1;
    for(int i=0; i<n; i++){
        char d;
        int t;
        cin>>d>>t;
        while(t--){
            if(d=='R'){
                curA[timeA] = curA[timeA-1]+1;
            }
            else{
                curA[timeA] = curA[timeA-1]-1;
            }
            timeA++;
        }
    }
    int timeB=1;
    for(int i=0; i<m; i++){
        char d;
        int t;
        cin>>d>>t;
        while(t--){
            if(d=='R'){
                curB[timeB] = curB[timeB-1]+1;
            }
            else{
                curB[timeB] = curB[timeB-1]-1;
            }
            timeB++;
        }
    }
    int ans =-1;
    for(int i=1; i<timeA; i++){
        if(curA[i] == curB[i]){
            ans =i;
            break;
        }
    }
    cout<<ans;
    return 0;
}