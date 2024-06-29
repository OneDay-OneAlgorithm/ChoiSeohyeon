#include <bits/stdc++.h>
using namespace std;
// 1번부터 N번까지, 1번이 제일 위에 n번이 가장 아래
// 1장 남을 때까지 반복 -> 가장 위의 한 장을 버리고, 다음 장을 가장 아래로 두기

int main()
{
    queue<int> q;

    int n;
    cin >> n;

    // 큐는 1부터 채우기
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    while (q.size() > 1)
    {                      // 큐의 크기가 1보다 크면 반복
        q.pop();           // 맨 위 카드 버림
        q.push(q.front()); // 다음 카드를 맨 아래로 옮김
        q.pop();           // 옮겨진 카드는 큐에서 제거
    }

    cout << q.front() << "\n";

    return 0;
}