#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int cnt[7] = {};
    //숫자정하기
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    //갯수세기
    for(int i=0; i<10; i++ ){
        cnt[arr[i]]++;
    }
    for(int i=1; i<7; i++){
        cout<<i<<" - "<<cnt[i]<<endl;
    }
    return 0;
}