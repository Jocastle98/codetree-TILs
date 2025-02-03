#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m, 0));
    int num = 1;


    for (int d = 0; d < n + m - 1; d++) {
        int row = (d < m) ? 0 : d - (m - 1);
        int col = (d < m) ? d : m - 1;

        while (row < n && col >= 0) {
            v[row][col] = num++;
            row++;
            col--;
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
