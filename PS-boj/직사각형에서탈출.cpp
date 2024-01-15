// 백준 :직사각형에서 탈출 , 브론즈 3

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int Xtmp, Ytmp;

    Xtmp = min(x, y);
    Ytmp = min(w - x, h - y);

    cout << min(Xtmp, Ytmp) << "\n";

    return 0;
}