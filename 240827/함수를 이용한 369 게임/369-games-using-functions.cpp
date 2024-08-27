#include <iostream>
using namespace std;

// void cnt3(int a,int b){
//     int cnt =0;
//     for(int i=a; i<=b; i++){
//         if(i%10 ==3 or i%10 ==6 or i%10==9 or i/10 ==3 or i/10==6 or i/10==9 or i%3==0){
//             cnt++;
//         }
//     }
//     cout<<cnt;
// }

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt =0;
    int a,b;
    cin>>a>>b;
    
    for(int i=a; i<=b; i++){
        if(i%10 ==3 or i%10 ==6 or i%10==9 or i/10 ==3 or i/10==6 or i/10==9 or i%3==0){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}