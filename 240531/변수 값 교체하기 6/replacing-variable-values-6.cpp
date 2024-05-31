#include <iostream>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a=2;
    int b=5;
    int temp;
    temp =a; //temp에 a저장
    a =b;   //a에 b값대입
    b= temp; //b에 a값 대입

    cout<<a<<endl<<b;
    return 0;
}