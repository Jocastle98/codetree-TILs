#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0, y = 0; // 현재 위치
    int dir = 0;      // 현재 바라보는 방향 (0: 북, 1: 동, 2: 남, 3: 서)
    int dx[4] = {0, 1, 0, -1}; // 각 방향에 따른 x 변화량
    int dy[4] = {1, 0, -1, 0}; // 각 방향에 따른 y 변화량

    string commands;
    cin >> commands; // 명령어 문자열 입력받기

    for (char command : commands) {
        if (command == 'L') {
            dir = (dir + 3) % 4; // 왼쪽으로 90도 회전
        } else if (command == 'R') {
            dir = (dir + 1) % 4; // 오른쪽으로 90도 회전
        } else if (command == 'F') {
            x += dx[dir];
            y += dy[dir];
        }
    }

    cout << x << " " << y << endl;
    return 0;
}