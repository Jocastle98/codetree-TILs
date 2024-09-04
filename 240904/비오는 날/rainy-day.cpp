#include <iostream>
#include <string>
using namespace std;

class Wether{
    public:
    string time ,day ,wet;
        Wether(string time="",string day="",string wet=""){
            this-> time = time;
            this-> day = day;
            this-> wet = wet;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Wether wethers[n];
    for(int i=0; i<n; i++){
        string a,b,c;
        cin>>a>>b>>c;
        wethers[i] = Wether(a,b,c);
    }
    int min = -1; // 최소 비오는 날의 인덱스 초기화

    for (int i = 0; i < n; i++) {
        if (wethers[i].wet == "Rain" && (min == -1 || wethers[i].time < wethers[min].time)) {
            min = i;
        }
    }

    cout<<wethers[min].time<<" "<<wethers[min].day<<" "<<wethers[min].wet;
    return 0;
}