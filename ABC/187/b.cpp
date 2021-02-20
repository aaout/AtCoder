#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<P> p(n);
    rep(i, n)
    {
        cin >> p[i].first >> p[i].second;
    }
    rep(i, n) rep(j, i)
    {
        double s, t;
        s = p[i].first - p[j].first;
        t = p[i].second - p[j].second;
        double u = t / s;
        if (u <= 1 && -1 <= u)
            ans++;
    }
    cout << ans << endl;
}
