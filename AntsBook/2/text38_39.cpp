#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
int N, M;
char maze[101][101];
int d[101][101];
int sx, sy, gx, gy;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int INF = 100000000;

int bfs()
{
    queue<P> que;
    rep(i, N)
    {
        rep(j, M)
        {
            d[i][j] = INF;
        }
    }
    que.push(P(sx, sy));
    d[sx][sy] = 0;

    while (que.size())
    {
        P p = que.front();
        que.pop();

        if (p.first == gx && p.second == gy)
            break;

        rep(i, 4)
        {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny] == INF)
            {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

int main()
{
    cin >> N >> M;
    rep(i, N)
    {
        rep(j, M)
        {
            cin >> maze[i][j];
            if (maze[i][j] == 'S')
            {
                sx = i;
                sy = j;
            }
            if (maze[i][j] == 'G')
            {
                gx = i;
                gy = j;
            }
        }
    }
    int res = bfs();
    cout << res << endl;
}
