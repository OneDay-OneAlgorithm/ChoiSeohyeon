// [3차] 압축
// LZW 압축 알고리즘 : 인코딩하는 아이템의 길이를 변경하는 것이 LZW 압축 알고리즘의 핵심
// 사전정의 : "문자열"로 이루어진 데이터를 "int형"으로 매핑을 시켜줘야 하는 과정이 필요 -> map 자료구조 사용
// 압축하기 :
// 1. 사전에서 현재 입력과 일치하는 가장 긴 문자열 W를 찾는다.
// 2. W에 해당하는 사전의 색인 번호를 출력하고, 입력에서 W를 제거한다.
// 3. 입력에서 처리되지 않은 단어를 사전에 등록한다.

#include <string>
#include <vector>
#include <map>

using namespace std;

int Num = 1;
map<string, int> Dict;

// 기본 사전을 만드는 함수
void Dictionary()
{
    for (char C = 'A'; C <= 'Z'; C++)
    {
        string Str = "";
        Str += C;
        Dict[Str] = Num++;
    }
}

// 주어진 문자열을 LZW 알고리즘을 이용하여 압축하는 함수
void Compression(string Str, vector<int> &answer)
{
    string Cur = "";
    for (int i = 0; i < Str.length(); i++)
    {
        Cur += Str[i];

        // 현재 문자열이 사전에 없다면
        if (Dict[Cur] == 0)
        {
            // 사전에 추가하고 압축 결과에 이전 문자열의 인덱스 추가
            Dict[Cur] = Num++;
            Cur = Cur.substr(0, Cur.length() - 1);
            answer.push_back(Dict[Cur]);
            Cur = "";
            i--;
        }
    }
    // 마지막 남은 문자열의 인덱스 추가
    answer.push_back(Dict[Cur]);
}

// 주어진 문자열을 LZW 알고리즘으로 압축한 결과를 반환하는 함수
vector<int> solution(string msg)
{
    vector<int> answer;
    Dictionary();
    Compression(msg, answer);
    return answer;
}
