#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int arr[6]={0};



int main() {
    // 여기에 코드를 작성해주세요.
    
    for(int i=0; i<6; i++) cin>>arr[i]; 
    sort(arr,arr+6); //숫자를 정렬
    int a=arr[0]+arr[5];
    int b= arr[1]+arr[4];
    int c=arr[2]+arr[3];
    int big = max(a,max(b,c));
    int small = min(a,min(b,c));
    cout<<big-small;
    
    return 0;
}