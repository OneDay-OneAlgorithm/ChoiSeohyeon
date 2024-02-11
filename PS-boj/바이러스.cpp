// 실버 3, 진짜로 1번 컴퓨터가 걸렸을 경우만 출력하면 된다...

#include <iostream>
#include <vector>
using namespace std;

int ComNum, Pair;
vector<int> vals[101];
int visited[101] = {0};

void dfs(int curr)
{
    visited[curr] = 1;
    for (int i = 0; i < vals[curr].size(); ++i)
    {
        int next = vals[curr][i];
        if (!visited[next])
        {
            dfs(next);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> ComNum >> Pair;

    for (int i = 0; i < Pair; i++)
    {
        int a, b;
        cin >> a >> b;
        vals[a].push_back(b);
        vals[b].push_back(a);
    }

    dfs(1);

    int res = -1;
    for (int i = 1; i <= ComNum; i++)
    {
        if (visited[i])
        {
            res++;
        }
    }

    cout << res << "\n";

    return 0;
}
