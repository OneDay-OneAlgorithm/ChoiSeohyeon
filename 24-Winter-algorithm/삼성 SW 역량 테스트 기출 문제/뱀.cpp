// 백준 : 뱀, 골드4
// 알고리즘 분류: 덱, 큐
// 로직:
// - 매 시간 단위마다 뱀의 머리가 새 위치로 이동합니다.
// - 이동한 위치가 벽이나 자신의 몸일 경우 게임 종료.
// - 사과가 있는 경우 사과를 먹고 꼬리를 움직이지 않습니다.
// - 사과가 없는 경우 꼬리를 한 칸 이동시킵니다.
// - 방향 변환 정보에 따라 뱀의 방향을 변경합니다.

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// 방향을 나타내는 배열 (상, 하, 좌, 우)
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main()
{
    int N, K, L;
    cin >> N >> K;
    vector<vector<int>> board(N, vector<int>(N, 0));

    // 사과 위치 설정
    for (int i = 0; i < K; ++i)
    {
        int a, b;
        cin >> a >> b;
        board[a - 1][b - 1] = 2; // 사과를 나타내는 값 2
    }

    cin >> L;
    queue<pair<int, char>> turns;
    for (int i = 0; i < L; ++i)
    {
        int X;
        char C;
        cin >> X >> C;
        turns.push({X, C});
    }

    int time = 0, direction = 3; // 초기 방향은 오른쪽을 가리킴
    queue<pair<int, int>> snake; // 뱀의 위치 저장
    snake.push({0, 0});
    board[0][0] = 1; // 뱀의 초기 위치 설정

    while (true)
    {
        time++;
        int nx = snake.back().first + dx[direction];
        int ny = snake.back().second + dy[direction];

        // 벽이나 자신의 몸에 부딪히면 게임 종료
        if (nx < 0 || ny < 0 || nx >= N || ny >= N || board[nx][ny] == 1)
        {
            break;
        }

        // 사과가 있으면 사과를 먹고 꼬리는 움직이지 않음
        if (board[nx][ny] == 2)
        {
            board[nx][ny] = 1;
            snake.push({nx, ny});
        }
        else
        {
            // 사과가 없으면 꼬리를 이동시킴
            board[nx][ny] = 1;
            snake.push({nx, ny});
            auto tail = snake.front();
            snake.pop();
            board[tail.first][tail.second] = 0;
        }

        // 방향 전환 처리
        if (!turns.empty() && time == turns.front().first)
        {
            if (turns.front().second == 'L')
            {
                direction = (direction + 3) % 4; // 왼쪽으로 회전
            }
            else
            {
                direction = (direction + 1) % 4; // 오른쪽으로 회전
            }
            turns.pop();
        }
    }

    cout << time << endl;
    return 0;
}
