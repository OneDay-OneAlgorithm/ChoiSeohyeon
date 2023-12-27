#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N;
    cin >> N;

    ios::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<int> pq;

    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        if (val == 0)
        {
            if (pq.empty() == 1)
            {
                cout << "0"
                     << "\n";
            }
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else
            pq.push(val);
    }
    return 0;
}