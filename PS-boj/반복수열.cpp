#include <iostream>
#include <vector>
#include <cmath>
#define MAX 100000

using namespace std;

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

void dfs(int num, int P)
{
    visited[num]++;
    if (visited[num] > 2)
        return;
    dfs(calc(num, P), P);
}

int main()
{
    ios::sync_with_stdio();
    cin.tie();

    int A, P;
    cin >> A >> P;
    dfs(A, P);

    int count = 0;

    for (int i = 0; i <= MAX; i++)
    {
        if (visited[i] == 1)
            count++;
        else
            continue;
    }

    cout << count << "\n";

    return 0;
}