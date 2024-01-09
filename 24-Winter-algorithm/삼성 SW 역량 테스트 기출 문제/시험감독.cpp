// 백준 : 시험감독, 브론즈2
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

    long long res = 0;

    for (int i = 0; i < n; i++)
    {
        v[i] -= b;
        res++; // 총 감독은 무조건 1명 필요

        // 부감독관이 필요한 경우만 계산
        if (v[i] > 0)
        {
            res += v[i] / c; // 부감독관 추가
            if (v[i] % c != 0)
            {
                res++; // 나머지가 있는 경우 부감독관 추가
            }
        }
    }

    cout << res;
    return 0;
}