#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int coin[11];
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }

    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        // 현재 가장 큰 금액의 동전으로 거스름돈을 최대한 만들기
        cnt += (k / coin[i]);
        // 남은 채울 돈 계산
        k = k % coin[i];
    }
    cout << cnt;
    return 0;
}