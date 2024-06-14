#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin>>N;
    int sum =0;
    while(1){
        if(N%2==0){
            N /=2;
            sum++;
        }
        else if(N%2==1){
            N = N*3+1;
            sum++;
        }
        if(N==1){
            cout<<sum;
            break;
        }
        

    }

    return 0;
}