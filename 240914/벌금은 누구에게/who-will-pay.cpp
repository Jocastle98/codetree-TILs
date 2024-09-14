#include <iostream>
using namespace std;
#define max 100
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,k;
    cin>>n>>m>>k;
    int arr[max+1]={0};
    int ans=-1;
    for(int i=0; i<m; i++){
        int number;
        cin>>number;
        arr[number]++;

        if(arr[number]==k){
            ans = number;
            break;
        }
    }
    cout<<ans;
    

    return 0;
}