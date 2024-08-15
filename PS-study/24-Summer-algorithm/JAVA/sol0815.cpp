#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		stack<char> s;
		string arr;

		cin >> arr;
		int len = arr.length();

		bool isValid = true;

		for (int j = 0; j < len; j++)
		{
			if (arr[j] == '(')
			{
				s.push(arr[j]);
			}
			else
			{
				if (s.empty())
				{
					isValid = false;
					break;
				}
				else
				{
					s.pop();
				}
			}
		}

		if (!s.empty() || !isValid)
		{
			cout << "NO" << "\n";
		}
		else
		{
			cout << "YES" << "\n";
		}
	}

	return 0;
}