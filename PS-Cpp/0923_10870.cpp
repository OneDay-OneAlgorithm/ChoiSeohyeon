#include <iostream>
using namespace std;

int Fibo(int n)
{
    int contain[100] = {0};
    contain[0] = 0;
    contain[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        contain[i] = contain[i - 1] + contain[i - 2];
    }

    return contain[n];
}

int main()
{
    int n;
    cin >> n;
    cout << Fibo(n);

    return 0;
}