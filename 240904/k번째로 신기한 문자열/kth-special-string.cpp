#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n, k;
    string t;
    
    // 입력 받기
    cin >> n >> k >> t;
    
    string arr[n];
    string str[n]; 
    int cnt = 0;
    
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        
        if (arr[i].substr(0, t.size()) == t) {
            str[cnt++] = arr[i];
        }
    }
    
    
    sort(str, str + cnt);
    
    
    cout << str[k-1] << endl;

    return 0;
}