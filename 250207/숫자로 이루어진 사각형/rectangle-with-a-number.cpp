#include <iostream>

using namespace std;

int N;

int main() {
    cin >> N;

    // Write your code here!

int num =1;
    for(int i=0; i<N; i++){
        
        for(int j=0; j<N; j++){
            cout<<num++<<" ";
            if(num >9) num =1;
        }
        cout<<endl;
    }

    return 0;
}