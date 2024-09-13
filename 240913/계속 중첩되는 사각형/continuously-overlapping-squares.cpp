#include <iostream>
using namespace std;
#define size 200
#define off 100
int grid[size][size];
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int x1[n],x2[n],y1[n],y2[n];
    for(int i=0; i<n; i++){
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        x1[i]+=off;
        y1[i]+=off;
        x2[i]+=off;
        y2[i]+=off;
        int color = (i%2==0)?1:2;
        for(int x=x1[i];x<x2[i]; x++){
            for(int y=y1[i];y<y2[i];y++){
               if (color == 2 || grid[x][y] == 0) {
                    // 파란색이거나 아직 색상이 칠해지지 않은 경우만 갱신
                    grid[x][y] = color;
                }
            
            }
        }
    }
    int sum=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(grid[i][j]==2){
                sum++;
            }
        }
    }
    cout<<sum;
    
    return 0;
}