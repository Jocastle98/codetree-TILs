#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[200];
    int cnt =0;

    for(int i=0; i<200; i++){
        cin>>str[cnt];
        if(str[cnt] =="0"){
            break;
        }
        
           
            cnt++;
        
        
    }
    cout<<cnt<<endl;
    for(int i=0; i<cnt; i+=2){
        cout<<str[i]<<endl;
    }
    
  
    return 0;
}