// 대 -> 소문자 함수 tolower()

#include <iostream>
#include <cctype>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string val;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        for (int j = 0; j < val.length(); j++)
        {
            val[j] = tolower(val[j]);
        }
        cout << val << "\n";
    }

    return 0;
}