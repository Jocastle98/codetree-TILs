#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin>>N;
   

    for(int i=1; i<=N; i++){
        int a;
        cin>>a;
        if((a%2==1) and (a%3==0)){
            cout<<a<<endl;
        }
    }
    return 0;
}