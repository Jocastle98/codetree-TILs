#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int sum=0;
    for(int i=1; i<=5; i++){
        cin>>a;
        if(a%2==0){
            sum++;
        }
    }
    cout<<sum;
    return 0;
}