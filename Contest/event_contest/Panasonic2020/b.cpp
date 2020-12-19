#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int h, w;
    cin >> h >> w;
    int x[h][w];
    int min_x = 1000;
    rep(i, h) rep(j, w)
    {
        cin >> x[i][j];
        if (x[i][j] < min_x)
            min_x = x[i][j];
    }
    int sum = 0;
    rep(i, h) rep(j, w)
    {
        int y = x[i][j] - min_x;
        sum += y;
    }
    cout << sum << endl;
}
