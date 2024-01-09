// 백준: 제로, 실버4
// 알고리즘 : 큐
// 입력 값이 0이면 최근 수를 지우고 모두 더하기

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int k, num;
    cin >> k;

    int res = 0;

    stack<int> s;

    for (int i = 0; i < k; i++)
    {
        cin >> num;
        if (num == 0)
        {

            s.pop();
        }
        else
        {
            s.push(num);
        }
    }

    while (!s.empty())
    {
        res += s.top();
        s.pop();
    }

    cout << res << "\n";

    return 0;
}