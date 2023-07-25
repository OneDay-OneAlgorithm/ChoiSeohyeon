#include <iostream>
using namespace std;

// 에라토스테네스의 체 사용
// 2부터 시작하여 해당 수를 제외한 해당수의 배수 제거
int main()
{
    int m, n;
    cin >> m >> n;

    // 0과 1은 미리 소수가 아님을 뺌
    int a[1000001] = {0, 1};

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; i * j <= n; j++)
        {
            a[i * j] = 1;
        }
    }
    for (int i = m; i <= n; i++)
    {
        if (!a[i])
        {
            cout << i << "\n";
        }
    }
    return 0;
}