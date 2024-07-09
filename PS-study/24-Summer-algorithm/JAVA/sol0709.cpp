#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

	int n, m;
	cin >> n >> m;

	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int t = 0; t < m; ++t)
	{
		int i, j, k;
		cin >> i >> j >> k;

		vector<int> subArray(arr.begin() + i - 1, arr.begin() + j);
		sort(subArray.begin(), subArray.end());

		cout << subArray[k - 1] << endl;
	}

	return 0;
}