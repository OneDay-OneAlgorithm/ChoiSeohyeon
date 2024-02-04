// 백준 실버 5, 거스름돈

#include <iostream>
using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    int count = 0;

    if (N % 5 == 0)
    {
        count = N / 5;
    }
    else
    {
    }

    return 0;
}