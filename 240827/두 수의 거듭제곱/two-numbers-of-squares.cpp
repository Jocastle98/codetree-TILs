#include <iostream>
using namespace std;

int ad(int a,int b){
    int c=1;
    for(int i=0; i<b; i++){
        c*=a;
    }
    return c;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;

    cout<<ad(a,b);
    return 0;
}