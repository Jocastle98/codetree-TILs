#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt = 0; 
    for(int i = 0; i < n; i++){
        int sum = 0;
        // 구간의 합 구하기
        for(int j = i; j < n; j++){
            sum += arr[j];
            int len = j - i + 1; // 구간의 길이
            double avg = (double)sum / len; // 평균 계산
            // 구간 내 원소 중 평균과 같은 값이 있는지 확인
            for(int k = i; k <= j; k++){
                if(arr[k] == avg){
                    cnt++;
                    break; // 조건을 만족하면 다음 구간으로 넘어감
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}