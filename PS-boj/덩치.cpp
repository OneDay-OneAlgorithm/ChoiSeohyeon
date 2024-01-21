// 백준 : 덩치 , 실버 5, 브루트포스 알고리즘
// pair 사용, pair는 first와 second로 값 관리
// 헤더 파일은 #include <utility>

#include <iostream>
#include <utility>
using namespace std;

int main()
{

    int n;
    cin >> n;
    pair<int, int> xy[51];

    for (int i = 0; i < n; i++)
    {
        cin >> xy[i].first >> xy[i].second;
    }

    int score = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (xy[i].first < xy[j].first && xy[i].second < xy[j].second)
            {
                score++;
            }
        }

        cout << score << " ";
        score = 1;
    }

    return 0;
}