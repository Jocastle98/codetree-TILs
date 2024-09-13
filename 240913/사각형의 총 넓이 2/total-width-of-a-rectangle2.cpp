#include <iostream>
using namespace std;
#define size 201
#define off 100
bool grid[size][size];
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int sum=0;
    
    for(int i=0; i<n; i++){
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        x1+=off;
        x2+=off;
        y1+=off;
        y2+=off;
        for(int j=x1; j<x2; j++){
            for(int k=y1; k<y2; k++){
                if(!grid[j][k]){//마킹되지않은 격자만 처리
                    grid[j][k] =true;
                    sum++;
                }
            }
        }
        
        
    }
    cout<<sum;
    return 0;
}