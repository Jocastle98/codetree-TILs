#include <iostream>
#include <algorithm>

using namespace std;

int n;
bool InRange(int x, int y){
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    // 격자의 크기와 정보를 입력받습니다.
    cin >> n;
    int arr[20][20] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){ // 수정: j < n
            cin >> arr[i][j];
        }
    }

    int ans = 0;

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= n - 3; j++){
            int sum1 = arr[i][j] + arr[i][j+1] + arr[i][j+2];

            
            for(int x = 0; x < n; x++){
                for(int y = 0; y <= n - 3; y++){
                    // 겹침 검사
                    bool overlap = false;
                    if(i == x){
                        // 같은 행에 있는 경우 열의 범위가 겹치는지 확인
                        if(!(j + 2 < y or y + 2 < j)){
                            overlap = true;
                        }
                    }
                    // 다른 행에 있는 경우 겹치지 않음

                    if(!overlap){
                        int sum2 = arr[x][y] + arr[x][y+1] + arr[x][y+2];
                        ans = max(ans, sum1 + sum2);
                    }
                }
            }
        }
    }

    // 최대 동전의 수를 출력합니다.
    cout << ans;

    return 0;
}