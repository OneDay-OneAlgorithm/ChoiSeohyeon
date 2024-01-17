// 백준 : 뜨거운 붕어빵, 브론즈 4
// 뒤집기 : 알고리즘 stl -> reverse

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    string container;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> container;
        reverse(begin(container), begin(container) + m);

        cout << container;

        cout << "\n";
    }

    return 0;
}
