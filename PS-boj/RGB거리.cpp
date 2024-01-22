// 백준 : RGB 거리 , 실버1
// dp -> 재귀관계식
// index 이전 값만 비교를 하면 됨, 경우의 수 2가지 중에서 더 작은 값을 더함.

#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int Input[4] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> Input[i];
    }

    return 0;
}