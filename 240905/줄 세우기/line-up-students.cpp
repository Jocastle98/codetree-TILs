#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Student{
    public:
    int h,k,n;
        Student(int height=0,int kg=0,int number=0){
            this->h=height;
            this->k=kg;
            this->n=number;
            
        }
};
bool cmp(Student a, Student b){
    if(a.h==b.h){
        if(a.k==b.k){
            return a.n<b.n;
        }
        return a.k>b.k;
    }
    return a.h>b.h;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Student stu[n];
    int cnt=1;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;

        stu[i] = Student(a,b,cnt++);
    }
    sort(stu,stu+n,cmp);

    for(int i=0; i<n; i++){
        cout<<stu[i].h<<" "<<stu[i].k<<" "<<stu[i].n<<endl;
    }
    return 0;
}