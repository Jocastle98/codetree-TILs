#include <iostream>
using namespace std;

// 윤년인지 확인하는 함수
bool year4(int n) {
    if (n % 4 == 0) {
        if (n % 100 == 0) {
            if (n % 400 == 0) {
                return true; // 400의 배수인 경우 윤년
            }
            return false; // 100의 배수이지만 400의 배수는 아닌 경우 평년
        }
        return true; // 4의 배수이지만 100의 배수가 아닌 경우 윤년
    }
    return false; // 4의 배수가 아닌 경우 평년
}

// 해당 월의 일수를 반환하는 함수
int days(int y, int m) {
    if (m == 2) {
        if (year4(y)) {
            return 29; // 윤년인 경우 2월은 29일
        } else {
            return 28; // 평년인 경우 2월은 28일
        }
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30; // 4, 6, 9, 11월은 30일
    }
    return 31; // 나머지 월은 31일
}

// 주어진 날짜의 계절을 판단하는 함수
void season(int y, int m, int d) {
    if (m < 1 || m > 12 || d < 1 || d > days(y, m)) {
        cout << -1;
        return;
    }

    if (m >= 3 && m <= 5) {
        cout << "Spring";
    } else if (m >= 6 && m <= 8) {
        cout << "Summer";
    } else if (m >= 9 && m <= 11) {
        cout << "Fall";
    } else {
        cout << "Winter";
    }
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    season(y, m, d);
    return 0;
}