// 요세푸스 순열: 1번부터 N번까지 N명의 사람, 순서대로 K번째 사람을 제거, 원에서 사람들이 제거되는 순서 (N, K)-요세푸스 순열
// 풀이 방법: 큐, circular linked list, 점화식 등이 있음

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    cout << "<";

    while (q.size() > 1)
    {
        for (int i = 1; i < k; i++)
        {
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">";
    return 0;
}