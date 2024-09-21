#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100] = {0};

    // 집안에 있는 사람 수 입력
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_sum = INT_MAX; // 최소 이동 거리 합을 저장할 변수

    // 각 집을 모임 장소로 선택해본다.
    for (int i = 0; i < n; i++) {
        int total_distance = 0;  // 각 모임 장소에 대해 이동 거리의 합

        // 모든 집에서 선택한 집으로 사람들을 이동시킨다.
        for (int j = 0; j < n; j++) {
            total_distance += arr[j] * abs(i - j); // 이동 거리 * 사람 수
        }

        // 최소 이동 거리 합을 업데이트
        if (total_distance < min_sum) {
            min_sum = total_distance;
        }
    }

    // 최소 이동 거리 출력
    cout << min_sum << endl;

    return 0;
}