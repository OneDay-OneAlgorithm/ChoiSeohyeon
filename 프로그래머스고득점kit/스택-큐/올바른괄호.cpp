#include <bits/stdc++.h>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    string stack;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            stack += '(';
        }
        else
        {
            if (!stack.empty())
            {
                stack.pop_back();
            }
            else
                stack += ')';
        }
    }

    if (stack.empty())
    {
        answer = true;
    }
    else
        answer = false;

    return answer;
}