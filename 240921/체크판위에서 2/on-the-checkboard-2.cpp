#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x,y;
    cin>>x>>y;

    char arr[21][21]={0};
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin>>arr[i][j];
        }
    }
    
    int ans =0;
    for(int i=1; i<x; i++){
        for(int j=1; j<y; j++){
            //처음 점프
            if(arr[0][0] != arr[i][j]){
                for(int k=i+1; k<x; k++){
                    for(int l=j+1; l<y; l++){
                        //다음 점프
                        if(arr[i][j] !=arr[k][l] and k<x-1 and l<y-1){
                            ans++;
                    }
                }
            }
            }
        }
    }
    cout<<ans;
    return 0;
}