// 백준 : 약수 구하기
// 주의 : '/' 연산자는 몫을 반환하고, '%' 연산자는 나머지를 반환한다.

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    // 두 번째 생각 오류: vector<int> v(n); 는 n개의 백터가 0으로 초기화로 생겨서,
    // v.push_back(i) 하는 순간 n값만큼 백터가 생긴 뒤에 푸쉬가 됨! 주의!!
    vector<int> v;

    // 첫 번째 생각 오류: 루프를 0부터 하면 0/0 주의!
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }

    // 더 좋은 점: 굳이 count로 따로 안새고, v.size()로 비교할 수 있음
    if (k <= v.size())
    {
        cout << v[k - 1]; // 백터의 인덱스는 0부터 시작 함
    }
    else
        cout << "0";

    return 0;
}