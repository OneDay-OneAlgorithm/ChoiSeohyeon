#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b)
{
    int A = stoi(to_string(a) + to_string(b));
    int B = stoi(to_string(b) + to_string(a));
    return A > B;
}

string solution(vector<int> v)
{
    bool flag = true;
    for (auto it : v)
    {
        if (it != 0)
            flag = false;
    }
    if (flag)
        return "0";
    string answer = "";
    sort(v.begin(), v.end(), comp);
    for (auto it : v)
        answer += to_string(it);
    return answer;
}