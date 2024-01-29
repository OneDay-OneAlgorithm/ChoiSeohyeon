// 백준, 실버 4

#include <iostream>
using namespace std;

int n, t;
int arr[10001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[j];
        }

        int count = 1;
        int curr = arr[1];

        while (curr != n && count <= n)
        {
            curr = arr[curr]; // 핵심 코드 : 현재 값을 다음 가르키는 값으로 갱신
            count++;
        }

        if (count > n)
            cout << "0"
                 << "\n";
        else
            cout << count << "\n";
    }

    return 0;
}