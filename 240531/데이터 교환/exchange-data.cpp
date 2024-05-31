#include <iostream>
#include <list>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a=5;
    int b=6;
    int c=7;
    int temp;
    temp = a;
    a=c;
    c=b;
    b=temp;
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<c<<endl;

    return 0;
}