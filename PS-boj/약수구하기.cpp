// 백준 : 약수 구하기

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        v[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (n / i == 0)
        {
            v[i] = 1;
        }
    }

    return 0;
}