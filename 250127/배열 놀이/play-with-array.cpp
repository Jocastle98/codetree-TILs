#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int arr[n] = {};
    
    // n개의 원소 입력받기
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // q개의 질의 처리
    for (int i = 0; i < q; i++) {
        int a, b, e; // 질의에서 사용할 변수 선언
        cin >> a;    // 첫 번째 값 (질의의 종류)

        if (a == 1) {
            // a가 1인 경우: b번째 원소 출력
            cin >> b;
            cout << arr[b - 1] << endl;

        } else if (a == 2) {
            // a가 2인 경우: 값 b가 배열에 존재하는지 확인하고 인덱스 출력
            cin >> b;
            bool found = false;
            for (int j = 0; j < n; j++) {
                if (arr[j] == b) {
                    cout << j +1<< endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << 0 << endl; // 값이 없는 경우 0 출력
            }

        } else if (a == 3) {
            // a가 3인 경우: s와 e를 입력받아 해당 범위 출력
            cin >> b >> e; // b: 시작 인덱스, e: 끝 인덱스
            for (int j = b - 1; j <= e - 1; j++) {
                cout << arr[j];
                if (j != e - 1) { 
                    cout << " "; // 마지막 요소 뒤에는 공백 없음
                }
            }
            cout << endl;
        }
    }

    return 0;
}
