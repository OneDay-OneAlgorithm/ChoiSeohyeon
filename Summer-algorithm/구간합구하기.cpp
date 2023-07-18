#include <iostream>
using namespace std;

int main(void) {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m,v;
	long long int arr[100001] = {0};
	int a, b;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> v;
		arr[i] = arr[i - 1] + v;
	}

	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		cout << arr[b] - arr[a - 1] << "\n";
	}

	return 0;
}