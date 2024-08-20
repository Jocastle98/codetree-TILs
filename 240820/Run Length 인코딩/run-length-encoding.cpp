// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     // 여기에 코드를 작성해주세요.
//     string arr;
//     cin>>arr;
    
//     char a = arr[0];
//     int cnt =1;

//     string b ="";
//     for(int i=1; i<arr.length(); i++){
//         if(arr[i]==a){
//             cnt++;
//         }
//         else{
//             //문자
//             b +=a;
//             //문자 반복 횟수
//             b +=to_string(cnt);
//             //다음문자로 초기화
//             a= arr[i];
//             //반복횟수도 초기화
//             cnt =1;
//         }
//     }
//     //출력할 문자열에 순서대로 입력 가능하도록
//     b +=a;
//     b +=to_string(cnt);
//     cout<<b.length()<<endl<<b;


//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
 
// 실행 길이 인코딩(RLE) 데이터 압축 알고리즘 수행
// 문자열 `str`에서
int main()
{
    string str;
    cin>>str;
    // 출력 문자열 저장
    string encoding = "";
    int count;
 
    for (int i = 0; str[i]; i++)
    {
        // 인덱스 `i`에 있는 문자의 발생 횟수를 계산합니다.
        count = 1;
        while (str[i] == str[i + 1]) {
            count++, i++;
        }
 
        // 현재 문자와 그 개수를 결과에 추가합니다.
        encoding += str[i]+to_string(count);
    }
 
    cout<<encoding.length()<<endl<<encoding;
    return 0;
}