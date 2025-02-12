#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool num(int n1, int n2){
   

    for(int i=0; i<=n1-n2; i++){
        bool match = true;
        for(int j=0; j<n2; j++){
            if(a[i+j] != b[j]){
                match = false;
            }
        }
        if(match) return true;
    }
    return false;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Write your code here!
    if(num(n1,n2)) cout<<"Yes";
    else cout<<"No";
    return 0;
}