#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Student{
    public:
    string n;
    int h;
    float k;
        Student(string name="",int height=0, float kg=0.0){
            this->n=name;
            this->h=height;
            this->k=kg;
        }
};
bool cmp(Student a, Student b){
    
    return a.n<b.n;
}
bool cmp1(Student a, Student b){
    return a.h>b.h;
}


int main() {
    // 여기에 코드를 작성해주세요.
    
    Student stu[5];
    for(int i=0; i<5; i++){
        string a;
        int b;
        float c;
        cin>>a>>b>>c;

        stu[i] = Student(a,b,c);
    }
    sort(stu,stu+5,cmp);
    cout<<"name"<<endl;
    for(int i=0; i<5; i++){
        cout<<stu[i].n<<" "<<stu[i].h<<" "<<stu[i].k<<endl;
    }
    cout<<endl;
    sort(stu,stu+5,cmp1);
    cout<<"height"<<endl;
    for(int i=0; i<5; i++){
        cout<<stu[i].n<<" "<<stu[i].h<<" "<<stu[i].k<<endl;
    }
    return 0;
}