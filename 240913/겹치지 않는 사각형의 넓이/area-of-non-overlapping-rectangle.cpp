#include <iostream>
using namespace std;
#define size 2000
#define off 1000
bool grid[size][size];
int main() {
    // 여기에 코드를 작성해주세요.
    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;
    int mx1, my1, mx2, my2;

    cin >> ax1 >> ay1 >> ax2 >> ay2;
    cin >> bx1 >> by1 >> bx2 >> by2;
    cin >> mx1 >> my1 >> mx2 >> my2;
    int sum=0;
    ax1 +=off;
    ax2 +=off;
    bx1 +=off;
    bx2 +=off;
    mx1 +=off;
    mx2 +=off;
    ay1 +=off;
    ay2 +=off;
    by1 +=off;
    by2 +=off;
    my1 +=off;
    my2 +=off;
    
    for(int x= ax1; x<ax2; x++){
        for(int y=ay1; y<ay2; y++){
            grid[x][y]=true;
        }
    }
    for(int x= bx1; x<bx2; x++){
        for(int y=by1; y<by2; y++){
            grid[x][y]=true;
        }
    }
    for(int x= mx1; x<mx2; x++){
        for(int y=my1; y<my2; y++){
            if(grid[x][y]){
                grid[x][y] = false;
            }
        }
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(grid[i][j]){
                sum++;
            }
        }
    }

    
    cout<<sum;
    return 0;
}