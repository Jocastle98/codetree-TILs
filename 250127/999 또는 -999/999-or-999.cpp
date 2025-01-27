#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    vector<int> v;

    while(true){
        int a;
        cin>>a;
        if(a==999 || a==-999){
            break;
        }
        
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<v.back()<<" "<<v.front();
    return 0;
}