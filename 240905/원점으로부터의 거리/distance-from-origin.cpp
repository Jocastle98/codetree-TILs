#include <iostream>
#include <algorithm>
using namespace std;

class ap{
    public:
    int x,y,n;
        ap(int x=0,int y=0, int num=0){
            this->x=x;
            this->y=y;
            this->n=num;
        }
};
bool cmp(ap a, ap b){
    if(abs(a.x)+abs(a.y)==abs(b.x)+abs(b.y)){
        return a.n<b.n;
    }
    return abs(a.x)+abs(a.y)<abs(b.x)+abs(b.y);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    ap A[n];
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        A[i] = ap(a,b,i+1);
    }
    sort(A,A+n,cmp);
    for(int i=0; i<n; i++){
        cout<<A[i].n<<endl;
    }
    return 0;
}