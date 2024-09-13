#include <iostream>
using namespace std;

#define MAX_SIZE 20001  // 충분히 큰 배열 크기 (좌우 10000칸씩 여유분)
#define OFFSET 10000    // 중앙 기준 오프셋 설정

int main() {
    int n;
    cin >> n;

    int white_count[MAX_SIZE] = {0};  // 타일이 흰색으로 칠해진 횟수
    int black_count[MAX_SIZE] = {0};  // 타일이 검은색으로 칠해진 횟수
    bool is_gray[MAX_SIZE] = {false}; // 타일이 회색이 되었는지 여부
    int cur = OFFSET;  // 시작 위치는 배열 중앙

    for (int i = 0; i < n; ++i) {
        int dis;
        char dir;
        cin >> dis >> dir;

        if (dir == 'L') {
            // 현재 위치도 포함해서 왼쪽으로 이동하며 타일을 흰색으로 칠함
            for (int j = 0; j < dis; j++) {
                if (!is_gray[cur]) {  // 타일이 회색이 아닌 경우에만
                    white_count[cur]++;  // 흰색으로 덧칠
                    // 회색 조건 확인
                    if (white_count[cur] >= 2 && black_count[cur] >= 2) {
                        is_gray[cur] = true;
                    }
                }
                cur--;  // 왼쪽으로 한 칸 이동
            }
        } else if (dir == 'R') {
            // 현재 위치도 포함해서 오른쪽으로 이동하며 타일을 검은색으로 칠함
            for (int j = 0; j < dis; j++) {
                if (!is_gray[cur]) {  // 타일이 회색이 아닌 경우에만
                    black_count[cur]++;  // 검은색으로 덧칠
                    // 회색 조건 확인
                    if (white_count[cur] >= 2 && black_count[cur] >= 2) {
                        is_gray[cur] = true;
                    }
                }
                cur++;  // 오른쪽으로 한 칸 이동
            }
        }
    }

    int white = 0, black = 0, gray = 0;

    // 배열 순회하여 흰색, 검은색, 회색 타일 카운트
    for (int i = 0; i < MAX_SIZE; ++i) {
        if (is_gray[i]) {
            gray++;  // 회색
        } else if (white_count[i] > 0 && black_count[i] == 0) {
            white++;  // 흰색
        } else if (black_count[i] > 0 && white_count[i] == 0) {
            black++;  // 검은색
        }
    }

    cout << white << " " << black << " " << gray << endl;

    return 0;
}