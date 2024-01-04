// 백준 : 시험감독
// N개의 시험장, 각 시험장의 응시자 수 A
// 총감독관이 한 시험장에서 감시할 수 있는 응시자 수 -> B, 부감독관이 한 시험장에서 감시할 수 있는 응시자 수 -> C
// 각 시험장에 총감독관은 1명만, 부감독관은 여러명 가능

// 핵심: 각 시험장에서 총감독관이 맡을 수 있는 값을 빼고 남은 값 부감독관 투입
// 주의: 총 감독관 1명만 투입되는 경우, 1,000,00 강의실에 1,000,000명이 다 들어가는 경우 -> 결과값 long long형 선언

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, b, c;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cin >> b >> c;

    long long res = n;

    for (int i = 0; i < n; i++)
    {
        v[i] -= b;
        if (v[i] > b)
        {
            res += (v[i] + c - 1) / c;
        }
    }

    cout << res;
}