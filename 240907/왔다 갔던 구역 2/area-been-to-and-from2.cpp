#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int OFFSET = 5000;   // 음수 좌표를 양수로 변환하기 위한 오프셋
    const int MAX = 10000;     // 좌우로 충분히 이동할 수 있는 범위
    int arr[MAX] = {0};        // 0으로 초기화된 배열 (이동 경로 기록용)

    int position = OFFSET;     // 시작 위치를 0으로 설정 (OFFSET 적용)
    int x;
    char dir;

    // n개의 명령 입력
    for (int i = 0; i < n; i++) {
        cin >> x >> dir;

        if (dir == 'L') {
            // 왼쪽으로 이동: 현재 위치에서 왼쪽으로 x만큼 이동
            for (int j = position - 1; j >= position - x; j--) {
                arr[j]++;  // 지나간 흔적 기록
            }
            position -= x;  // 새로운 위치 갱신
        } else if (dir == 'R') {
            // 오른쪽으로 이동: 현재 위치에서 오른쪽으로 x만큼 이동
            for (int j = position + 1; j <= position + x; j++) {
                arr[j]++;  // 지나간 흔적 기록
            }
            position += x;  // 새로운 위치 갱신
        }
    }

    // 2번 이상 지나간 영역 크기 계산
    int result = 0;
    for (int i = 0; i < MAX; i++) {
        if (arr[i] > 1) {
            result++;
        }
    }

    // 결과 출력
    cout << result << endl;

    return 0;
}