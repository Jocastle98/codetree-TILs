#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

   

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    // 벡터 정렬
    sort(v.begin(), v.end());

    // 상위 2개 요소 출력
    cout << v[n - 1] << " " << v[n - 2] << endl;

    return 0;
}
