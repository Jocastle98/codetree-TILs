#include <iostream>

using namespace std;

int n, m;
int mn;
void MaxNum(int n, int m){
    for(int i=1; i<=n; i++){
        if(n%i ==0 && m%i ==0){
            mn =i;
        }
    }
    cout<<mn;
  
}

int main() {
    cin >> n >> m;

    // Write your code here!
    MaxNum(n,m);
    return 0;
}