// A: 기준 값, P: 이전 값에서의 각각 곱할 자리수 제곱수

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define MAX 500000

vector<int> visited(MAX, 0);

int calc(int A, int P)
{
    int temp = A;
    int sum = 0;

    while (temp > 0)
    {
        sum += (int)(pow(temp % 10, P));
        temp /= 10;
    }

    return sum;
}

void dfs(int val, int P)
{
    visited[val]++;
    if (visited[val] > 2)
    {
        return;
    }

    dfs(calc(val, P), P);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, P;
    cin >> A >> P;

    dfs(A, P);

    int count = 0;

    for (int i = 0; i < MAX; i++)
    {
        if (visited[i] == 1)
        {
            count++;
        }
        else
            continue;
    }

    cout << count << "\n";

    return 0;
}