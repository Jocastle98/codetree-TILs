#include <iostream>
using namespace std;

// 숫자에 3, 6, 9가 들어가 있거나 3의 배수인 숫자의 개수를 세는 함수
int cnt3(int a, int b) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        int num = i;

        // 숫자에 3, 6, 9가 포함되어 있는지 확인
        while (num > 0) {
            int digit = num % 10;
            if (digit == 3 || digit == 6 || digit == 9) {
                cnt++;
                break; // 3, 6, 9가 하나라도 포함되어 있으면 다음 숫자로 넘어감
            }
            num /= 10;
        }

        // 만약 위의 루프에서 cnt가 증가하지 않았고, 숫자가 3의 배수이면 cnt 증가
        if (num == 0 && i % 3 == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;

    // cnt3 함수를 호출하여 결과를 출력
    int result = cnt3(a, b);
    cout << result << endl;

    return 0;
}