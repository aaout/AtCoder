#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// c++の計算順序復習する
// AC　時間かかり過ぎ
bool calc(int x1, int y1, int x2, int y2, int x3, int y3)
{
    if (x1 == x2 && x1 == x3 && x2 == x3)
    {
        return true;
    }
    if (y1 == y2 && y1 == y3 && y2 == y3)
    {
        return true;
    }
    if (x1 == x2)
    {
        if (x1 != x3 || x2 != x3)
            return false;
    }
    // if (y1 == y2 && y1 == y3 && y2 == y3)
    // {
    //     return true;
    // }
    double s = y2 - y1;
    double t = x2 - x1;
    double u = x3 - x1;
    if ((s / t) * u + y1 == y3)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    vector<P> x(n);
    rep(i, n)
    {
        cin >> x[i].first >> x[i].second;
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (calc(x[i].first, x[i].second, x[j].first, x[j].second, x[k].first, x[k].second) == true)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}
