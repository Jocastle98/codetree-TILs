#include <iostream>
#include <algorithm>
using namespace std;

class Handshake {
public:
    int t;
    int x;
    int y;
    Handshake() {}
    Handshake(int _t, int _x, int _y) : t(_t), x(_x), y(_y) {}
};

// 비교 함수를 클래스 외부에 정의
bool cmp(const Handshake& a, const Handshake& b) {
    return a.t < b.t;
}

int main() {
    int N, K, P, T; // N: 개발자 수, K: 전염 횟수, P: 처음 감염된 개발자 번호, T: 악수 횟수
    cin >> N >> K >> P >> T;
    int student[101] = {0}; // 남은 전염 횟수
    bool inf[101] = {false}; // 감염 여부
    inf[P] = true; // 초기 감염 여부 설정
    student[P] = K; // 초기 남은 전염 횟수 설정

    Handshake handshakes[250];

    for (int i = 0; i < T; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        handshakes[i] = Handshake(t, x, y);
    }

    // 비교 함수를 사용하여 시간 순서대로 정렬
    sort(handshakes, handshakes + T, cmp);

    // 악수 이벤트 처리
    for (int i = 0; i < T; i++) {
        int t = handshakes[i].t;
        int x = handshakes[i].x;
        int y = handshakes[i].y;

        // x가 y를 감염시킬 수 있는지 확인
        if (inf[x] && student[x] > 0) {
            student[x]--;
            if (!inf[y]) {
                inf[y] = true;
                student[y] = K;
            }
        }

        // y가 x를 감염시킬 수 있는지 확인
        if (inf[y] && student[y] > 0) {
            student[y]--;
            if (!inf[x]) {
                inf[x] = true;
                student[x] = K;
            }
        }
    }

    // 결과 출력 (개발자 1번부터 N번까지 순서대로)
    for (int i = 1; i <= N; i++) {
        cout << inf[i];
    }
    cout << endl;
    return 0;
}