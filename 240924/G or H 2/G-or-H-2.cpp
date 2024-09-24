#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // 사람의 수
    vector<pair<int, char>> people(n); // 위치와 알파벳을 저장하는 벡터

    // 사람들의 위치와 알파벳 입력
    for(int i = 0; i < n; i++){
        cin >> people[i].first >> people[i].second;
    }

    // 위치를 기준으로 정렬
    sort(people.begin(), people.end());

    int ans = 0;
    // 모든 가능한 구간 탐색
    for(int i = 0; i < n; i++){
        int G_cnt = 0;
        int H_cnt = 0;
        for(int j = i; j < n; j++){
            if(people[j].second == 'G'){
                G_cnt++;
            } else if(people[j].second == 'H'){
                H_cnt++;
            }

            // 조건 확인
            if((G_cnt > 0 && H_cnt == 0) || (G_cnt == 0 && H_cnt > 0) || (G_cnt == H_cnt && G_cnt > 0)){
                int size = people[j].first - people[i].first;
                ans = max(ans, size);
            }
        }
    }
    cout << ans << endl;

    return 0;
}