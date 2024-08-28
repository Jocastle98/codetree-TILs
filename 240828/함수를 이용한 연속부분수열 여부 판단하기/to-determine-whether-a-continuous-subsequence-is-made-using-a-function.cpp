#include <iostream>
using namespace std;

// 연속 부분 수열을 체크하는 함수
bool isSubsequence(int n1, int n2, int arr1[], int arr2[]) {
    for (int i = 0; i <= n1 - n2; i++) {
        bool isMatch = true;
        for (int j = 0; j < n2; j++) {
            if (arr1[i + j] != arr2[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch) {
            return true;
        }
    }
    return false;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int arr1[n1];
    int arr2[n2];

    // 수열 A 입력
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // 수열 B 입력
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // 연속 부분 수열인지 확인
    if (isSubsequence(n1, n2, arr1, arr2)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}