#include <iostream>
using namespace std;

int n, m;

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    cin >> n >> m;
    int arr[100][100] = {0};
    int x = 0, y = 0;
    int dir = 0; // 초기 방향: 오른쪽
    int dx[4] = {0, 1, 0, -1}; // 오른쪽, 아래, 왼쪽, 위
    int dy[4] = {1, 0, -1, 0};

    for (int cnt = 1; cnt <= n * m; cnt++) {
        arr[x][y] = cnt;

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (InRange(nx, ny) && arr[nx][ny] == 0) {
            x = nx;
            y = ny;
        } else {
            // 방향 전환
            dir = (dir + 1) % 4;
            x += dx[dir];
            y += dy[dir];
        }
    }

    // 배열 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}