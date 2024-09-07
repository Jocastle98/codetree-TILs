#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int x;
    int a=0;
    int cur =50000;
    char dir;
    int arr[100000]={0};
    for(int i=0; i<n; i++){
        cin>>x>>dir;
        if(dir=='L'){
            for(int j=cur; j>cur-x; j--){
                arr[j]++;
            }
            cur -=x;
        }

        else{
            for(int k=cur+1; k<cur+x; k++){
                arr[k]++;
            }
            cur +=x;
        }
        
    }
    int max =0;
    for(int i=0; i<=100000; i++){
        if(arr[i]>1){
            max++;
        }
    }
    cout<<max;
    return 0;
}