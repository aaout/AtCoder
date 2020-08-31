#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};

void landfill(vector<string> &map, int x, int y)
{
    rep(i, 4) rep(j, 4)
    {
        int sx = x + dx[i], sy = y + dy[i];
        if (map[sx][sy] == 'x')
            continue;
        if (map[sx][sy] == 'o')
        {
            map[sx][sy] = 'x';
            landfill(map, sx, sy);
        }
    }
}

int main()
{
    vector<string> map(10);
    rep(i, 10) cin >> map[i];
    int count = 0;
    cout << endl;
    while (1)
    {
        rep(i, 10) rep(j, 10)
        {
            map[i][j] = 'o';
            if (map[i][j] == 'o')
            {
                landfill(map, i, j);
                count++;
            }
        }
        if (count == 1)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
}
