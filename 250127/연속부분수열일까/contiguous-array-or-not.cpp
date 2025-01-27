#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int arr1[n1];
    int arr2[n2];

    // A 수열 입력
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // B 수열 입력
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // 부분수열 판별
    bool isSubsequence = false;

    for (int i = 0; i <= n1 - n2; i++) { // A 수열 내에서 B 수열의 시작점 탐색
        bool match = true;

        for (int j = 0; j < n2; j++) { // B 수열과 비교
            if (arr1[i + j] != arr2[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            isSubsequence = true;
            break;
        }
    }

    if (isSubsequence) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
