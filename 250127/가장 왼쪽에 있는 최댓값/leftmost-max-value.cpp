#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;

    // 벡터 입력
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int max_n = n; 
    while (true) {
        int max_num = 0;

     
        for (int i = 0; i < max_n; i++) {
            if (v[i] > v[max_num]) {
                max_num = i;
            }
        }

     
        cout << max_num +1<< " ";

       
        if (max_num == 0) {
            break;
        }

   
        max_n = max_num - 1;
    }

    return 0;
}
