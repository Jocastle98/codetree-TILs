#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin>>a>>b;
    int n=-1;
    int len = a.length();
    for(int i=0; i<len; i++){
        a = a.substr(len-1,1)+a.substr(1,len-1);
        if(a==b){
            
            break;    
        }
        n++;
    }
    cout<<n-2;
    return 0;
}