// sort 함수
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;

    for (int i = 0; i < commands.size(); i++)
    {
        vector<int> t;
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
        {
            t.push_back(array[j]);
        }
        sort(t.begin(), t.end());
        answer.push_back(t[commands[i][2] - 1]);
    }

    return answer;
}