#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    vector<int> beu;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < m; i++){
        int v;
        cin >> v;
        beu.push_back(v);
    }
        
    int cnt = 0;
    for(int i = 0; i < n - m + 1; i++){
        vector<int> v = beu;
        for(int j = 0; j < m; j++){
            for(int k = 0; k < v.size(); k++)
                if(v[k] == arr[i + j]){
                    swap(v[k], v.back());
                    v.pop_back();
                    break;
                }
        } 
        if(v.size() == 0)
            cnt++;
    }
    cout << cnt;
    return 0;
}