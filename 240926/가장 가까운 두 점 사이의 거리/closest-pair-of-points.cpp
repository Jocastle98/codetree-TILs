#include <iostream>
#include <algorithm>  
#include <cmath>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int x[100]={0}, y[100]={0};
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        int dis_x = INT_MAX;
        int dis_y = INT_MAX;
        for(int j=i+1; j<n; j++){
            dis_x = min(dis_x,abs(x[i]-x[j]));
            dis_y = min(dis_y,abs(y[i]-y[j]));
        }
        ans = min(ans, dis_x*dis_x+dis_y*dis_y);
    }
    cout<<ans;
    return 0;
}