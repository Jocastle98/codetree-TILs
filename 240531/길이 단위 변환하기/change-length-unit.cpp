#include <iostream>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    float a = 30.48; //1피트
    float b = 160934; //1마일

    cout<<fixed;
    cout.precision(1);
    cout<<"9.2ft = "<<9.2*a<<"cm"<<endl;
    cout<<"1.3mi = "<<1.3*b<<"cm";
    return 0;
}