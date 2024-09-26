#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int x[100]={0},y[100]={0};
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    int ans =0;
    //한점 선택
    for(int i=0; i<n; i++){
        //두번째점 선택
        for(int j=i+1; j<n; j++){
            //세번째점 선택
            for(int k=j+1; k<n; k++){
                //i점과 j점은 x축에 평행 
                if(y[i]==y[j]){ 
                    if(x[i]==x[k] or x[j]==x[k]){
                        int height = abs(y[i]-y[k]); //높이
                        int dis = abs(x[i]-x[j]); //밑변
                        ans = max(ans , height*dis);

                    }
                }
                //i점과 k점은 y축에 평행
                if(x[i]==x[j]){
                    if(y[k]==y[i] or y[k]==y[j]){
                        int height = abs(y[i]-y[j]); //높이
                        int dis = abs(x[k]-x[i]); //밑변
                        ans = max(ans , height*dis);
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}