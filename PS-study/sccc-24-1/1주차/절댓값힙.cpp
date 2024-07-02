// abs 함수는 정수와 실수를 포함한 다양한 수치형 데이터에 사용할 수 있으며, cmath 라이브러리에 정의

#include <bits/stdc++.h>
using namespace std;

// 절댓값 기준으로 비교하는 함수
struct Compare
{
    bool operator()(int a, int b)
    {
        if (abs(a) == abs(b))
        {
            return a > b; // 절댓값이 같을 때, 값이 작은 것이 먼저
        }
        return abs(a) > abs(b); // 절댓값 기준으로 정렬
    }
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, Compare> pq;

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x != 0)
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
