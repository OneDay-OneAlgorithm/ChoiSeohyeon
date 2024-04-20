// 힙 : 완전 이진트리의 일종
// 최소 힙(Min Heap): 부모 노드의 키값이 자식 노드보다 작은 구조
// 우선 순위 큐 : 들어간 순서에 상관없이 우선순위가 높은 데이터가 먼저 나오는 것

// push() : 우선순위 큐에 값 추가
// pop() : 우선순위 큐에서 top 제거
// top() : 우선순의 큐에서 top에 있는 것 (우선순위 제일 높은 친구)
// empty() : 우선순위 큐가 비어있을 때 true 반환
// size() : 우선순위 큐에 포함된 원소의 수 반환

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x >= 1)
        {
            pq.push(x);
        }
        else if (x == 0)
        {
            if (pq.empty())
            {
                cout << "0\n";
            }
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
    return 0;
}