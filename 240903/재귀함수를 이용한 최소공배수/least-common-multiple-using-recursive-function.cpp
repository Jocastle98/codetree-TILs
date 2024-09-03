#include <iostream>
using namespace std;

int arr[10];

// 최대공약수를 구하는 함수
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// 최소공배수를 구하는 함수
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// 배열에서 n개의 수의 최소공배수를 구하는 재귀 함수
int fuc(int n) {
    if (n == 1) return arr[0];  // 배열의 첫 번째 수를 반환
    return lcm(arr[n-1], fuc(n-1));  // arr[n-1]과 나머지 n-1개의 수의 최소공배수를 구함
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << fuc(n) << endl;
    return 0;
}