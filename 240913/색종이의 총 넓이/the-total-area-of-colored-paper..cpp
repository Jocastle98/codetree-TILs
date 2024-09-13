#include <iostream>
using namespace std;
#define off 100
#define size 200
bool grid[size][size];
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n; i++){
        int x1,y1;
        cin>>x1>>y1;
        x1+=off;
        y1+=off;
        for(int x=x1; x<x1+8; x++){
            for(int y=y1; y<y1+8; y++){
                if(!grid[x][y]){
                    grid[x][y]=true;
                    sum++;
                }
            }
        }
    }
    cout<<sum;
    return 0;
}