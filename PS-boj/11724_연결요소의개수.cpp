// 연결 요소의 개수 , 실버 2
// 정점의 개수: n, 간선의 개수: m, 양끝점 u,v

#include <iostream>
#include <vector>
using namespace std;

// 전역 변수는 이미 0으로 초기화 되어 있음, 힙 공간 (이미 0임)
vector<int> G[1001];
int visited[1001];

// dfs(curr) : 현재 방문 중인 정점에서, 인접한 정점을 모두 방문한다.

void dfs(int curr)
{
    visited[curr] = 1;
    for (int i = 0; i < G[curr].size(); ++i)
    {
        // 다음에 방문할 정점의 정보
        int next = G[curr][i];
        if (visited[next])
            continue;
        dfs(next);
    }
}

// 함수 안에서는 스택을 이용해서 가비지 값을 사용 함
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    int res = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            res++;
        }
    }

    cout << res << "\n";

    return 0;
}