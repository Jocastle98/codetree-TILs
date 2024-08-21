#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int q;
    
    cin>>s;
    cin>>q;
   
    
    for(int i=0; i<q; i++){
        int type;
        cin>>type;
        if(type ==1){
            int a,b;
            cin>>a>>b;

            char tmp = s[b-1];
            s[b-1] = s[a-1];
            s[a-1] = tmp;
            
            cout<<s<<endl;
        }
        else{
            char a,b;
            cin>>a>>b;
            for(int j=0; j<s.length(); j++){
                if(s[j] ==a){
                    s[j] =b;
                }
           
            }
             cout<<s<<endl;
        }

    }
    
    
    
    

    return 0;
}