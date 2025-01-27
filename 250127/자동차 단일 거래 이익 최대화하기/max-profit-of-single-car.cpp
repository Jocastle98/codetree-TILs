#include <iostream>
#include <algorithm>
using namespace std;

int n;
int price[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    int cnt =0;
    int max_n =0;
    for(int i=0; i<n; i++){
        for(int j=i+1 ; j<n; j++){
            if(price[j]>price[i]){
                max_n = max(max_n, price[j]- price[i]);
                cnt++;
            }
            
        }
    }
    if(cnt>0) cout<<max_n;
    else cout<<0;

    return 0;
}
