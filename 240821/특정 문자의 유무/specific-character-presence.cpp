#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin>>a;
    bool ex1 = false;
    bool ex2 = false;
    for(int i=0; i<a.length()-1; i++){
        if(a.substr(i,2)=="ee"){
            ex1 = true;
        }
        
        if(a.substr(i,2) =="ab"){
            ex2 = true;
        }
   
    }
    if(ex1==true){
        cout<<"Yes ";
    }
    else{
        cout<<"No ";
    }
    if(ex2 ==true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}