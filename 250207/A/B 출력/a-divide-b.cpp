#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // 1. 정수 부분
    int integerPart = a / b;

    // 2. 나머지
    int remainder = a % b;
    
    // 정수 부분 출력
    cout << integerPart << ".";

    // 3. 소수부 21자리 구하기
    for(int i = 0; i < 20; i++) {
        remainder *= 10;
        int digit = remainder / b;
        remainder = remainder % b;
        cout << digit;
    }

    cout << endl;
    return 0;
}
