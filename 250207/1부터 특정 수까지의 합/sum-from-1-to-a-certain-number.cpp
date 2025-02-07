#include <iostream>

using namespace std;

int N;

int sumN(int N){
    int sum =0;
    for(int i=1; i<=N; i++){
        sum+=i;
    }
    return sum /10;
}

int main() {
    cin >> N;

    // Write your code here!

cout<<sumN(N);
    return 0;
}