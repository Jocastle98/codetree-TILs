#include <iostream>
using namespace std;


#define max_x 20000
#define off 10000

int n;

int arr[2*max_x+1];
int black[2*max_x+1],white[2*max_x+1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;

    int cur =off;
    int b=0,w=0;
    for(int i=0; i<n; i++){
        int dis;
        char dir;
        cin>>dis>>dir;
        if(dir =='R'){
            while(dis--){
                arr[cur]=1;
                black[cur]++;
                if(dis)cur++;
            }
        }
        else{
            while(dis--){
            arr[cur] =2;
            white[cur]++;
            if(dis)cur--;
            }
        }
        
    }
    for(int i=0; i<=2*max_x; i++){
        if(arr[i]==1) b++;
        if(arr[i]==2) w++;
    }
    cout<<w<<" "<<b;
    
    return 0;
}