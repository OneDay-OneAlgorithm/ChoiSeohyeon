#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> citations)
{
    int answer = 0;

    sort(citations.begin(), citations.end(), greater<int>());

    for (int i = 0; i < citations.size(); i++)
    {
        if (i < citations[i])
        {
            answer++;
        }
        else
            break;
    }

    return answer;
}