// 백준 과목 선택: 브론즈 4

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int minaVal = min({a, b, c, d});
    int maxVal = max(e, f);

    int res = ((a + b + c + d) - minaVal) + maxVal;

    cout << res;

    return 0;
}