#include <iostream>
#include <string>
using namespace std;

int n, m;
char grid[50][50];

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    // 8방향 설정: 상, 우상향, 우, 우하향, 하, 좌하향, 좌, 좌상향
    int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1}; 
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

    int cnt = 0;

    for (int x = 0; x < n; x++){
        for (int y = 0; y < m; y++){
            if (grid[x][y] == 'L'){
                // 8방향에 대해 탐색
                for (int dir = 0; dir < 8; dir++){
                    int nx = x, ny = y;
                    bool match = true;
                    // 'LEE'는 길이가 3인 문자열이므로, 총 2번 이동
                    for (int k = 1; k < 3; k++) {
                        nx += dx[dir];
                        ny += dy[dir];
                        // 범위를 벗어나거나 문자가 'E'가 아니면 실패
                        if (!InRange(nx, ny) || grid[nx][ny] != 'E') {
                            match = false;
                            break;
                        }
                    }
                    if (match) cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}