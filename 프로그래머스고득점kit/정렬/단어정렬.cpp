#include <bits/stdc++.h>
using namespace std;

string compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
}

int main()
{

    int n;
    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), compare);

    cout << v[0] << "\n";

    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1])
        {
            cout << v[i] << "\n";
        }
    }

    return 0;
}