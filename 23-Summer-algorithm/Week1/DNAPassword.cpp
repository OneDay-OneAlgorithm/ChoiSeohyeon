#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string passward;
	int size, range, answer = 0, A, C, G, T;
	int cA = 0, cC = 0, cG = 0, cT = 0;
    
	cin >> size >> range >> passward >> A >> C >> G >> T;

	for (int i = 0; i < range; i++)
	{
		if (passward[i] == 'A')
		{
			cA++;
		}
		else if (passward[i] == 'C')
		{
			cC++;
		}
		else if (passward[i] == 'G')
		{
			cG++;
		}
		else if (passward[i] == 'T')
		{
			cT++;
		}
	}
    
	if (A <= cA && C <= cC && G <= cG && T <= cT)
	{
		answer++;
	}

	for (int i = range; i < size; i++)
	{
		if (passward[i] == 'A')
		{
			cA++;
		}
		else if (passward[i] == 'C')
		{
			cC++;
		}
		else if (passward[i] == 'G')
		{
			cG++;
		}
		else if (passward[i] == 'T')
		{
			cT++;
		}
        
		if (passward[i - range] == 'A')
		{
			cA--;
		}
		else if (passward[i - range] == 'C')
		{
			cC--;
		}
		else if (passward[i - range] == 'G')
		{
			cG--;
		}
		else if (passward[i - range] == 'T')
		{
			cT--;
		}
        
		if (A <= cA && C <= cC && G <= cG && T <= cT)
		{
			answer++;
		}
	}

	cout << answer << "\n";

	return 0;
}



    