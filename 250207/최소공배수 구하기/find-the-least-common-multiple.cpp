#include <iostream>

using namespace std;

int n, m;
int mn;
void VCD(int n, int m, int mn){
    cout<<(m*n)/mn;
}

void GCD(int n, int m){
    
    for(int i=1; i<=n; i++){
        if(n%i==0 & m%i ==0){
            mn = i;
        }
    }

    VCD(m,n,mn);
}

int main() {
    cin >> n >> m;

    // Write your code here!
    GCD(n,m);
    return 0;
}