#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    

    for(int i=1; i<=10; i++){
        n /=i;
        if((n/i)<=1){
            cout<<i+1;
            break;
        }
        
    }

    return 0;
}