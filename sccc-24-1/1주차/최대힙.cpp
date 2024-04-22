#include <bits/stdc++.h>
using namespace std;

int main()
{

	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;

	priority_queue<int> pq;

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