#include <iostream>
using namespace std;

int ab(int &a,int &b){
    if(a>b){
        a *=2;
        b +=10;
    }
    else{
        b *=2;
        a +=10;
    }
    return a,b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;

    ab(a,b);
    cout<<a<<" "<<b;
    return 0;
}