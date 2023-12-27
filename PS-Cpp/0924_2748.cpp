#include <iostream>
using namespace std;

long long Fibo(int n)
{
    long long *fibo = new long long[n + 1];

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    long long res = fibo[n];
    delete[] fibo;

    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << Fibo(n);

    return 0;
}