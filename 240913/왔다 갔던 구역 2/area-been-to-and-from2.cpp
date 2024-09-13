#include <iostream>
using namespace std;
#define max_x 2000
#define max_n 100
#define off 1000
int n;
int x1[max_n],x2[max_n];
int arr[max_x+1]={0};
int main() {
    // 여기에 코드를 작성해주세요.
    
    cin>>n;
    
    int cur =0;

    for(int i=0; i<n; i++){
        int dis;
        char dir;
        cin>>dis>>dir;
        if(dir =='R'){
            x1[i] =cur;
            x2[i] =cur+dis;
            cur +=dis;
        }
        else{
            x1[i] =cur -dis;
            x2[i] =cur;
            cur -=dis;
        }
        
        x1[i] +=off;
        x2[i] +=off;
    }
    for(int i=0; i<n; i++){
        for(int j=x1[i]; j<x2[i]; j++){
            arr[j]++;
        }
    }
    int cnt=0;
    for(int i=0; i<max_x; i++){
        if(arr[i]>=2){
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}