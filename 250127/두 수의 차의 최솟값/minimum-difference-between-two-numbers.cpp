#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int min_n = INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            min_n = min(min_n, abs(v[i]- v[j]));
        }
    }
    cout<<min_n;
    return 0;
}