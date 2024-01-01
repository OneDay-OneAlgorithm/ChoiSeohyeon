#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    vector<vector<int>> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr.push_back({x, y});
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        // arr[i][0] 벡터의 첫번째 원소
        // arr[i][1] 벡터의 두번째 원소
        cout << arr[i][0] << " " << arr[i][1] << '\n';
    }

    return 0;
}