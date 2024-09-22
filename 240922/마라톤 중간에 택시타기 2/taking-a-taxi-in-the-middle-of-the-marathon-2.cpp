#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[101] = {0};  // 최대 N이 100이므로 크기를 101로 설정
    int y[101] = {0};

    for(int i = 1; i <= n; i++){
        cin >> x[i] >> y[i];  // 체크포인트 좌표 입력
    }

    int total_dis = 0;  // 전체 경로 거리
    for(int i = 1; i < n; i++){
        total_dis += abs(x[i] - x[i+1]) + abs(y[i] - y[i+1]);
    }

    int dis_min = total_dis;  // 최소 거리를 전체 거리로 초기화

    for(int i = 2; i < n; i++){  // 첫 번째와 마지막 체크포인트는 건너뛰지 않음
        int dis = total_dis;
        // i번째 체크포인트를 건너뛰었을 때의 거리 계산
        dis -= abs(x[i-1] - x[i]) + abs(y[i-1] - y[i]);       // i-1과 i 사이 거리 제거
        dis -= abs(x[i] - x[i+1]) + abs(y[i] - y[i+1]);       // i와 i+1 사이 거리 제거
        dis += abs(x[i-1] - x[i+1]) + abs(y[i-1] - y[i+1]);   // i-1과 i+1 직접 연결

        if(dis < dis_min){
            dis_min = dis;  // 최소 거리 업데이트
        }
    }

    cout << dis_min << endl;

    return 0;
}