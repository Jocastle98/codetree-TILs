#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr_2[3];
    char arr_1[3];
    int cnt[5]={};

    for(int i=0; i<3; i++){
        cin>>arr_1[i]>>arr_2[i];
     
    }
    for(int i=0; i<3; i++){
        if(arr_1[i]=='Y' and arr_2[i]>=37){
            cnt[1]++;   
        }
        else if(arr_1[i] =='N' and arr_2[i]>=37){
            cnt[2]++;  
        }
        else if(arr_1[i] =='Y' and arr_2[i]<37){
            cnt[3]++;  
        }
        else{
            cnt[4]++;
        }
    }
    for(int i=1; i<=4; i++ ){
        cout<<cnt[i]<<" ";
        
     
    }
       if(cnt[1]>=2){
            cout<<'E';
        }

    return 0;
}