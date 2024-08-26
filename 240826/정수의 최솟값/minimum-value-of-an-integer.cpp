#include <iostream>
#include <algorithm>
using namespace std;

int minA(int a, int b ,int c){
    int minim;

    if(a<=b and a<=c){
        minim =a;
    }
    else if(b<=a and b<=c){
        minim =b;
    }
    else if(c<=a and c<=b){
        minim = c;
    }
    return minim;

}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;

    cout<<minA(a,b,c);
    return 0;
}