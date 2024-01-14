// 백준 : 크로아티아 알파벳, 실버 5
// 최대 100글자 정도의 경우는 모두 정의해서 풀어도 됨.
// 한 문자씩만 받아서 비교 함면서 풀기

#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    cin >> input;

    int count = 0;
    for (int i = 0; i < input.length(); i++)
    {
        // input.length() 문자열이 끝인지 아닌지 확인 해줘야 함.
        if (input[i] == 'c' && i + 1 < input.length() && (input[i + 1] == '=' || input[i + 1] == '-'))
        {
            i++;
        }
        else if (input[i] == 'd')
        {
            if (i + 1 < input.length() && input[i + 1] == '-')
            {
                i++;
            }
            else if (i + 2 < input.length() && input[i + 1] == 'z' && input[i + 2] == '=')
            {
                i += 2;
            }
        }
        else if ((input[i] == 'l' || input[i] == 'n') && i + 1 < input.length() && input[i + 1] == 'j')
        {
            i++;
        }
        else if ((input[i] == 's' || input[i] == 'z') && i + 1 < input.length() && input[i + 1] == '=')
        {
            i++;
        }

        count++;
    }

    cout << count << "\n";

    return 0;
}
