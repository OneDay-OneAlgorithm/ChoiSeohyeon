#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string n;
	cin >> n;

	if (next_permutation(n.begin(), n.end()))
	{
		cout << n << endl;
	}

	return 0;
}