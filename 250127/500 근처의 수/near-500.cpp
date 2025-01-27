#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    vector<int> v;
    for(int i=0; i<10; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int max_num =500;
    int max_d=0;
    for(int i=0; i<10; i++){
        if(max_num > v[i]){
            max_d = max(i, max_d);
        }
    }
    cout<<v[max_d]<<" "<<v[max_d+1];
    return 0;
}