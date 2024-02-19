#include <iostream>
using namespace std;

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const char *day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main()
{
    int x, y;
    cin >> x >> y;

    int res = 0;

    for (int i = 1; i < x; ++i)
    {
        res += month[i];
    }

    res += y;

    cout << day[(res - 1) % 7] << "\n";

    return 0;
}
