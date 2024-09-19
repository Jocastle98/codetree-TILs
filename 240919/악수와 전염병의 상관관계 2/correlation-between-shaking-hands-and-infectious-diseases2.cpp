#include <iostream>
#include <algorithm>
using namespace std;

class Handshake {
public:
    int t;
    int x;
    int y;
    Handshake() {}
    Handshake(int t, int x, int y) {
        this->t = t;
        this->x = x;
        this->y = y;
    }
};

// 비교 연산자를 클래스 내부에 정의하여 정렬 기준 설정
bool compareHandshake(const Handshake& a, const Handshake& b) {
    return a.t < b.t;
}

int main() {
    int N, K, P, T; // N: 개발자 수, K: 전염 횟수, P: 초기 감염자 번호, T: 악수 횟수
    cin >> N >> K >> P >> T;

    int student[101] = {0};    // 각 개발자의 남은 전염 횟수
    bool inf[101] = {false};   // 각 개발자의 감염 여부
    inf[P] = true;
    student[P] = K;

    Handshake handshakes[250];

    for (int i = 0; i < T; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        handshakes[i] = Handshake(t, x, y);
    }

    // 악수 이벤트를 시간 순서대로 정렬
    sort(handshakes, handshakes + T, compareHandshake);

    // 악수 이벤트 처리
    for (int i = 0; i < T; i++) {
        int x = handshakes[i].x;
        int y = handshakes[i].y;

        bool x_can_infect = inf[x] && student[x] > 0;
        bool y_can_infect = inf[y] && student[y] > 0;

        // 감염된 개발자끼리의 악수도 전염 횟수에 포함
        if (x_can_infect) student[x]--;
        if (y_can_infect) student[y]--;

        // x가 y를 감염시킬 수 있는지 확인
        if (x_can_infect && !inf[y]) {
            inf[y] = true;
            student[y] = K;
        }

        // y가 x를 감염시킬 수 있는지 확인
        if (y_can_infect && !inf[x]) {
            inf[x] = true;
            student[x] = K;
        }
    }

    // 결과 출력
    for (int i = 1; i <= N; i++) {
        cout << inf[i];
    }
    cout << endl;

    return 0;
}