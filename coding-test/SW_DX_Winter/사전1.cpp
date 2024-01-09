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
    int start_block = s, end_block = s;
    int distance = 0;

    while (true)
    {
        if (start_block <= e && e <= end_block)
        {
            break;
        }
        else if (block[start_block] - start_block == block[e] - e)
        {
            if (e < start_block)
            {
                distance += start_block - e;
            }
            else
            {
                distance += e - end_block;
            }
            break;
        }
        distance += 1;
        start_block = block[start_block];
        end_block = block[end_block] + 1;
    }
    return distance;
}

int main(int argc, char **argv)
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
