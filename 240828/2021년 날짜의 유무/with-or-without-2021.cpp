#include <iostream>
using namespace std;

bool year(int m, int d){
    if(m>=8 and m<=12){
        if(m%2==0 and d<=31){
            return true;
        }
        else if(m%2==1 and d<=30){
            return true;
        }
        else{
            return false;
        }
    }
    if(m<8 and m!=2){
        if(m%2==1 and d<=31){
            return true;
        }
        else if(m%2==0 and d<=30){
            return true;
        }
        else{
            return false;
        }
    }
    if(m==2 and d<=28){
        return true;
    }
    else{
        return false;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m,d;
    cin>>m>>d;

    if(year(m,d)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}