#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;
    int len = a.length();
    int cnt = 0;

    // 모든 연속된 여는 괄호 두 개의 시작 위치를 찾음
    for(int i = 0; i < len - 1; i++) {
        if(a[i] == '(' && a[i + 1] == '(') {
            // 연속된 여는 괄호 두 개를 찾았을 때
            // 이 위치 이후에 있는 모든 연속된 닫는 괄호 두 개를 찾음
            for(int j = i + 2; j < len - 1; j++) {
                if(a[j] == ')' && a[j + 1] == ')') {
                    // 여는 괄호 쌍(i, i+1)과 닫는 괄호 쌍(j, j+1)을 세어줌
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
    return 0;
}