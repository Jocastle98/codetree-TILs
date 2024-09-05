#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Student{
    public:
    string n;
    int k,e,m;
        Student(string name="",int kor=0,int eng=0, int math=0){
            this->n=name;
            this->k=kor;
            this->e=eng;
            this->m=math;
        }
};
bool cmp(Student a, Student b){
    return a.k+a.e+a.m< b.k+b.e+b.m;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Student stu[n];
    for(int i=0; i<n; i++){
        string a;
        int b,c,d;
        cin>>a>>b>>c>>d;

        stu[i] = Student(a,b,c,d);
    }
    sort(stu,stu+n,cmp);

    for(int i=0; i<n; i++){
        cout<<stu[i].n<<" "<<stu[i].k<<" "<<stu[i].e<<" "<<stu[i].m<<endl;
    }
    return 0;
}