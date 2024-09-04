#include <iostream>
#include <string>
using namespace std;

class Spy {
public:
    string name;
    int score;

    // 생성자
    Spy(string name = "", int score = 0) {
        this->name = name;
        this->score = score;
    }
};

int main() {
    // 스파이 배열 5명
    Spy spys[5];

    // 입력 받기
    for (int i = 0; i < 5; i++) {
        string name;
        int score;
        cin >> name >> score;
        spys[i] = Spy(name, score);  // 객체 생성 및 배열에 저장
    }

    // 최소 점수를 가진 요원 찾기
    int minIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (spys[i].score < spys[minIndex].score) {
            minIndex = i;
        }
    }

    // 최소 점수 요원 정보 출력
    cout << spys[minIndex].name << " " << spys[minIndex].score << endl;

    return 0;
}