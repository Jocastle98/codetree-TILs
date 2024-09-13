#include <iostream>
#include <algorithm>
using namespace std;

#define off 1000
#define size 2000
bool grid[size][size];

int main() {
    int x1[2], y1[2], x2[2], y2[2];

    // 두 직사각형의 좌표 입력
    for (int i = 0; i < 2; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i] += off;
        y1[i] += off;
        x2[i] += off;
        y2[i] += off;
    }

    // 첫 번째 직사각형 A의 영역을 grid에 마킹
    for (int x = x1[0]; x < x2[0]; x++) {
        for (int y = y1[0]; y < y2[0]; y++) {
            grid[x][y] = true;  // 직사각형 A의 영역을 마킹
        }
    }

    // 두 번째 직사각형 B의 영역이 A를 덮으면 grid에서 지움
    for (int x = x1[1]; x < x2[1]; x++) {
        for (int y = y1[1]; y < y2[1]; y++) {
            if (grid[x][y]) {
                grid[x][y] = false; // 직사각형 B가 덮은 영역을 제거
            }
        }
    }

    // 남아 있는 첫 번째 직사각형의 잔해를 덮는 최소 직사각형 계산
    int min_x = size, min_y = size, max_x = 0, max_y = 0;
    bool found = false;

    // 남아 있는 A의 좌표를 탐색하여 최소 직사각형 영역을 찾음
    for (int x = x1[0]; x < x2[0]; x++) {
        for (int y = y1[0]; y < y2[0]; y++) {
            if (grid[x][y]) {
                found = true;
                min_x = min(min_x, x);
                min_y = min(min_y, y);
                max_x = max(max_x, x + 1);
                max_y = max(max_y, y + 1);
            }
        }
    }

    // 남아 있는 A의 넓이를 덮기 위한 최소 직사각형 넓이 계산
    if (found) {
        int remaining_area = (max_x - min_x) * (max_y - min_y);
        cout << remaining_area << endl;
    } else {
        // 남아 있는 영역이 없으면 넓이는 0
        cout << 0 << endl;
    }

    return 0;
}