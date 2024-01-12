// 백준 : queuestack, 실버3
// 메모리 줄이기 위해서는 배열 정적 할당
// 100000은 n제곱으로 해결 안됨.
// 큐만 pop 해주는 방식으로 해결 (어처피 스택은 기존 값 그대로니까)

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

const int MAX_N = 100001;
int queuestack[MAX_N];
int elements[MAX_N];
queue<int> q;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> queuestack[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> elements[i];
    }

    for (int i = N - 1; i >= 0; --i)
    {
        if (queuestack[i] == 0)
        {
            q.push(elements[i]);
        }
    }

    int M;
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int C;
        cin >> C;
        q.push(C);
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}