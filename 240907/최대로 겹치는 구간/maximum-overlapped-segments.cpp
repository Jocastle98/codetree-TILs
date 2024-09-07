#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int OFFSET = 100;  // 음수 좌표를 양수로 변환하기 위한 오프셋
    int arr[201] = {0};      // -100에서 100까지의 좌표를 표현하기 위한 배열

    // n개의 선분 입력
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        arr[a + OFFSET]++;     // 시작점에서 +1
        arr[b - 1 + OFFSET]--; // 끝점에서 닿지 않도록 b-1에서 처리
    }

    // 겹치는 선분의 최대값을 계산
    int max_overlap = 0;
    int current_overlap = 0;

    // 배열을 전체적으로 순회하여 최대 겹침 구간을 찾음
    for (int i = 0; i < 201; i++) {
        current_overlap += arr[i];  // 현재 위치에서의 겹침을 누적
        if (current_overlap > max_overlap) {
            max_overlap = current_overlap;  // 최대 겹침 값 갱신
        }
    }

    // 최대 겹침 값 출력
    cout << max_overlap << endl;

    return 0;
}