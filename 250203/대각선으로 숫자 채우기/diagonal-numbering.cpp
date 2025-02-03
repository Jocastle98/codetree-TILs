#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m, 0));
    int num = 1;

    // 대각선 방향으로 숫자 채우기
    for (int d = 0; d < n + m - 1; d++) {
        int row = (d < n) ? d : n - 1;
        int col = (d < n) ? 0 : d - (n - 1);
        
        while (row >= 0 && col < m) {
            v[row][col] = num++;
            row--;
            col++;
        }
    }

    // 행렬 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
