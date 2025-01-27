#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    // Write your code here!
    int n;
    cin>>n;
    vector<long long> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i =v.size()-1; i>=v.size()-2; i--){
        cout<<v[i]<<" ";
    }

    return 0;
}
