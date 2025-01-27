#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    

    // Write your code here!
    int n;
    cin>>n;
    int arr[n+1] ={};
    for(int i=0; i<=n; i++){
        int a;
        cin>>a;
        arr[a]++;
    }

    int max_num = -1;

    for(int i=0; i<=n; i++){
        if(arr[i] ==1 ){
            max_num = max(i, max_num);
        }
    }
    cout<<max_num;
    return 0;
}
