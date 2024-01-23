// 백준 : ROT13 , 브론즈 1
// 카이사르 암호
// c++ 입력 함수 getline() 한줄씩 저장
// length()와 size() 함수는 모두 문자열의 길이(문자 수)를 반환하며, 기능적으로 동일

#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        char alph = s[i];
        if (alph >= 'a' && alph <= 'z')
        {
            if (alph - 'a' < 13)
            {
                alph += 13;
            }
            else
                alph -= 13;
        }

        else if (alph > 'A' && alph <= 'Z')
        {
            if (alph - 'A' < 13)
            {
                alph += 13;
            }
            else
                alph -= 13;
        }
        s[i] = alph;
    }

    cout << alph << "\n";

    return 0;
}
