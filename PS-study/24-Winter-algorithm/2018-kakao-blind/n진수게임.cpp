// [3차] n진수 게임
// 진법 n, 미리 구할 숫자의 갯수 t, 게임에 참가하는 인원 m, 튜브의 순서 p
// n 진법으로 변환하는 것이 핵심, 튜브가 말할 값들의 string만 출력해주면 됨.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 진법 변환 함수
string convertN(int currentNum, int n)
{
    string N = "";
    char List[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    do
    {
        N += List[currentNum % n];
        currentNum /= n;
    } while (currentNum > 0);

    // 구한 값 순서 한번에 변환
    reverse(N.begin(), N.end());

    return N;
}

string solution(int n, int t, int m, int p)
{
    string answer = "";
    string result = "";
    int currentNum = 0;

    // 구할 값이 최대 t*m을 넘지 않음
    for (int i = 0; i < t * m; i++)
    {
        result += convertN(currentNum++, n);
    }

    // 튜브 차례 숫자들 추출
    for (int i = 0; i < t; i++)
    {
        answer += result[p - 1 + i * m];
    }

    return answer;
}