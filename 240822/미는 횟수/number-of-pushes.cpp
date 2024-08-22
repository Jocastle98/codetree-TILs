#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin>>a>>b;
    int n=0;
    int len = a.length();
    
    for(int i=1; i<=len; i++){
        char last = a[len-1];

        a = last + a.substr(0,len-1);
        if(a==b){
            
            break;    
        }
        else{
            n++;
//cout<<a<<endl;
        }
        
    }
    if(n==len){
        cout<<-1;
    }
    else{
        cout<<n+1;
    }
    return 0;
}