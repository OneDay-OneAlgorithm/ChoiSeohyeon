// map : Key(키)와 Value(값)이 쌍으로 이루어진 자료구조

#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n, m, counter = 0;
	map<string, int> vals;
	vector<string> res;

	cin >> n >> m;

	for (int i = 0; i < n + m; i++)
	{
		string str;
		cin >> str;
		vals[str]++;
		if (vals[str] > 1)
		{
			res.push_back(str);
		}
	}
	sort(res.begin(), res.end());
	cout << res.size() << "\n";
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << "\n";
	}

	return 0;
}