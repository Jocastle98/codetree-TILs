#include <iostream>
#include <climits>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    int n;
    cin >> n;
    Point points[100]; // 최대 100개의 점을 저장할 배열

    // 점의 좌표 입력
    for(int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    int min_distance_squared = INT_MAX; // 최소 거리의 제곱을 저장할 변수

    // 모든 가능한 점 쌍을 비교
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int dx = points[i].x - points[j].x;
            int dy = points[i].y - points[j].y;
            int distance_squared = dx * dx + dy * dy;

            // 최소 거리의 제곱 갱신
            if(distance_squared < min_distance_squared) {
                min_distance_squared = distance_squared;
            }
        }
    }

    cout << min_distance_squared;
    return 0;
}