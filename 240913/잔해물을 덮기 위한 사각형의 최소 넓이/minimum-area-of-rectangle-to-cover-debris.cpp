#include <iostream>
using namespace std;
#define off 1000
#define size 2000
bool grid[size][size];

int main() {
    // 여기에 코드를 작성해주세요.
    int x1[2],y1[2],x2[2],y2[2];
    int sum =0;
    for(int i=0; i<2; i++){
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        x1[i] +=off;
        y1[i] +=off;
        x2[i] +=off;
        y2[i] +=off;
    }
    
    for(int x=x1[0]; x<x2[0]; x++){
            for(int y=y1[0]; y<y2[0]; y++){
                if(!grid[x][y]){
                    grid[x][y] = true;
                    sum++;
                }
            }
        }
    // for(int x=x1[1]; x<x2[1]; x++){
    //         for(int y=y1[1]; y<y2[1]; y++){
    //             if(grid[x][y]){
    //                 grid[x][y] = false;
    //             }
    //         }
    //     }
    // for(int x=x1[0]; x<x2[0]; x++){
    //         for(int y=y1[0]; y<y2[0]; y++){
    //             if(grid[x][y]){
    //                 sum++;
    //             }
    //         }
    //     }
        cout<<sum;
    return 0;
}