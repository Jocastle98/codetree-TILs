#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    while(1){
        cin>>a;
        if(a==1){
            cout<<"John"<<endl;
        }
        else if(a==2){
            cout<<"Tom"<<endl;
        }
        else if(a==3){
            cout<<"Paul"<<endl;
        }
        else if(a==4){
            cout<<"Sam"<<endl;
        }
        else{
            cout<<"Vacancy"<<endl;
            break;
        }
    }
    
    return 0;
}