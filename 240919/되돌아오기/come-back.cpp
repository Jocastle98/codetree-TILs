#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0; // 현재 위치
    int n;
    cin >> n;
    int dx[4] = {0, 1, 0, -1}; // 북, 동, 남, 서
    int dy[4] = {1, 0, -1, 0};
    int t = 0; // 시간

    for (int i = 0; i < n; i++) {
        char dir;
        int dis;
        cin >> dir >> dis;
        int d;
        if (dir == 'N') {
            d = 0;
        } else if (dir == 'E') {
            d = 1;
        } else if (dir == 'S') {
            d = 2;
        } else {
            d = 3;
        } 

        // 거리만큼 이동하면서 매 초마다 위치 업데이트 및 확인
        for (int j = 0; j < dis; j++) {
            x += dx[d];
            y += dy[d];
            t++;
            if (x == 0 && y == 0) {
                cout << t << endl;
                return 0; // 프로그램 종료
            }
        }
    }

    // 이동 후에도 (0, 0)에 돌아오지 못한 경우
    cout << -1 << endl;
    return 0;
}