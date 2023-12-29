#include <iostream>

using namespace std;

// M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합

int main()
{

    int n, m;
    int card;
    int maxCard = -1;
    cin >> n >> m;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                card = arr[i] + arr[j] + arr[k];
                if (card <= m && card > maxCard)
                {
                    maxCard = card;
                }
            }
        }
    }

    cout << maxCard;

    return 0;
}