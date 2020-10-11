#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int h, w;
    cin >> h >> w;
    string s[h];
    rep(i, h) cin >> s[i];
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    int sx, sy;
    int cnt = 0;
    rep(i, h) rep(j, w)
    {
        rep(k, 4)
        {
            sx = j + dx[k];
            sy = i + dy[k];

            if (sx >= 0 && sx < w && sy >= 0 && sy < h && s[sy][sx] == '.' && s[i][j] == '.')
            {
                // cout << i << ' ' << j << endl;
                // cout << sx << ' ' << sy << endl;
                // cout << endl;
                cnt++;
            }
        }
    }
    cout << cnt / 2 << endl;
}
