#include <iostream>
#include <algorithm>
using namespace std;

void initBlock(int block[], int num)
{
    int count = 1;
    for (int i = 1; count <= num; ++i)
    {
        for (int j = 0; j < i && count <= num; ++j)
        {
            block[count] = count + i;
            count++;
        }
    }
}

int distanceVal(int block[], int s, int e)
{
    if (s > e)
        swap(s, e);
    int l = s, r = s;
    int num = 0;

    while (true)
    {
        if (l <= e && e <= r)
        {
            break;
        }
        else if (block[l] - l == block[e] - e)
        {
            num += abs(l - e);
            break;
        }
        num += 1;
        l = block[l], r = block[r] + 1;
    }
    return num;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int block[20001];
    initBlock(block, 20000);

    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; ++test_case)
    {
        int s, e;
        cin >> s >> e;

        cout << "#" << test_case << " " << distanceVal(block, s, e) << '\n';
    }

    return 0;
}
