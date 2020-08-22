#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll N, M;
//余った範囲は表示されないので少し多めに配列を用意
char field[110][110];

//マス目を埋めていく関数
//水たまりの奥まで到達すれば終わり
//for文の書き方上手い
void dfs(int x, int y)
{
    field[x][y] = '.';

    for (int dx = -1; dx <= 1; dx++)
    {
        for (int dy = -1; dy <= 1; dy++)
        {
            int nx = x + dx, ny = y + dy;
            if (0 <= nx && nx <= N && 0 <= ny && ny <= M && field[nx][ny] == 'W')
                dfs(nx, ny);
        }
    }
    return;
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> field[i][j];
        }
    }

    //dfsを呼び出した回数 == 水たまりの数
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (field[i][j] == 'W')
            {
                dfs(i, j);
                count++;
            }
        }
    }
    cout << count << endl;
}
