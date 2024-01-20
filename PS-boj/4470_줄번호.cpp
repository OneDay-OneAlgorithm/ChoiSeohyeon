// 백준 : 괄호 끼워넣기, 브론즈 4
// 개행 문자 지우기 ignore()
// 공백 포함 받기 getline()

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        cin.clear();
        printf("%d. ", i);
        cout << s << '\n';
    }
}