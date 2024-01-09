// #include <iostream>

// using namespace std;

// int main(int argc, char **argv)
// {
//     int test_case;
//     int T;
//     cin >> T;

//     for (test_case = 1; test_case <= T; ++test_case)
//     {
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int N, totalSum, maxSum;
vector<vector<int>> agentP;

void findMinPower(int idx, vector<int> &selected, vector<bool> &visited, int curSum, int &minLoss)
{
    if (idx == 3)
    {
        minLoss = min(minLoss, totalSum - curSum);
        return;
    }

    for (int i = 0; i < N; i++)
    {
        if (!visited[i])
        {
            selected[idx] = i;
            visited[i] = true;
            curSum -= agentP[i][3];
            curSum += agentP[i][idx];
            findMinPower(idx + 1, selected, visited, curSum, minLoss);
            curSum -= agentP[i][idx];
            curSum += agentP[i][3];
            selected[idx] = -1;
            visited[i] = false;
        }
    }
}

void findMinPower(int &minLoss)
{
    vector<int> selected(3, -1);
    vector<bool> visited(N, false);
    int curSum = maxSum;
    findMinPower(0, selected, visited, curSum, minLoss);
}

int main(int argc, char **argv)
{
    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; test_case++)
    {
        cin >> N;
        agentP.assign(N, vector<int>(4));
        totalSum = 0;
        maxSum = 0;

        for (int i = 0; i < N; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            int maxVal = max({a, b, c});
            agentP[i][0] = a;
            agentP[i][1] = b;
            agentP[i][2] = c;
            agentP[i][3] = maxVal;
            maxSum += maxVal;
            totalSum += a + b + c;
        }

        int minLoss = INT_MAX;
        if (N >= 3)
        {
            findMinPower(minLoss);
        }

        cout << "#" << test_case << " " << (minLoss == INT_MAX ? -1 : minLoss) << endl;
    }

    return 0;
}
