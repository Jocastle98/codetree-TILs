#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // 질의 응답의 개수
    int B[10][3]; // B가 묻는 세 자리 수의 각 자릿수를 저장할 배열
    int a[10]; // Count 1
    int b[10]; // Count 2

    for(int i = 0; i < n; i++){
        int num;
        cin >> num >> a[i] >> b[i];
        // 세 자리 수의 각 자릿수를 분리하여 저장
        B[i][0] = num / 100;
        B[i][1] = (num / 10) % 10;
        B[i][2] = num % 10;
    }

    int ans = 0; // 가능한 수의 개수

    // 가능한 모든 세 자리 수 생성
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            if(j == i) continue; // 서로 다른 숫자여야 함
            for(int k = 1; k <= 9; k++){
                if(k == i || k == j) continue; // 서로 다른 숫자여야 함
                // 생성된 수의 자릿수를 배열에 저장
                int num[3] = {i, j, k};

                bool possible = true;
                // 모든 질의에 대해 비교
                for(int q = 0; q < n; q++){
                    int strike = 0; //1번 카운트
                    int ball = 0; //2번 카운트
                    // Count 1과 Count 2 계산
                    for(int idx = 0; idx < 3; idx++){
                        if(num[idx] == B[q][idx]){
                            strike++;
                        } else if(num[idx] == B[q][(idx + 1) % 3] || num[idx] == B[q][(idx + 2) % 3]){
                            ball++;
                        }
                    }
                    // 카운트가 일치하지 않으면 가능한 수가 아님
                    if(strike != a[q] || ball != b[q]){
                        possible = false;
                        break;
                    }
                }
                if(possible){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}