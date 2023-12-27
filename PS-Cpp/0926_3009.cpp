#include <iostream>
using namespace std;

int main()
{
    int x[3] = {0};
    int y[3] = {0};

    int X, Y;

    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }

    if (x[0] == x[1])
    {
        X = x[2];
    }
    else if (x[0] == x[2])
    {
        X = x[1];
    }
    else
    {
        X = x[0];
    }

    if (y[0] == y[1])
    {
        Y = y[2];
    }
    else if (y[0] == y[2])
    {
        Y = y[1];
    }
    else
    {
        Y = y[0];
    }

    cout << X << " " << Y;

    return 0;
}
