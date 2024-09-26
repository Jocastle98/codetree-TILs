#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
#define max_n 40000
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int x[100]={0},y[100]={0};
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }

    int ans =INT_MAX;
    for(int i=0; i<n; i++){
        //직사각형 최소넓이를 N-1개의 점중에서 구해야한다.
        //각 점중 최소 혹은 최대값을 ㅅ구해야한다.
        int min_x = INT_MAX;
        int min_y = INT_MAX;
        int max_x = 1;
        int max_y = 1;
        for(int j=0; j<n; j++){
            if(j==i) continue; // i번째 점은 생략
            min_x = min(min_x,x[j]); //x최소값
            min_y = min(min_y,y[j]); //y 최소값
            max_x = max(max_x,x[j]);
            max_y = max(max_y,y[j]);
            
        }
        ans = min(ans , (max_x-min_x)*(max_y-min_y));

    }
    cout<<ans;
    return 0;
}