#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int count = 0;

    answer.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == answer[count])
        {
            continue;
        }
        else
        {
            answer.push_back(arr[i]);
            count++;
        }
    }

    return answer;
}