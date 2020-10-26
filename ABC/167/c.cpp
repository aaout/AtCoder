#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;

// 初見×　要復習
// bit全探索の理解不足
// BFSでも実装可能 (買う or 買わない)
int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    vector<vector<int>> a(n, vector<int>(m));
    rep(i, n)
    {
        cin >> c[i];
        rep(j, m) cin >> a[i][j];
    }
    int ans = INF;
    rep(s, 1 << n)
    {
        int cost = 0;
        vector<int> d(m);
        rep(i, n)
        {
            if (s >> i & 1)
            {
                cost += c[i];
                rep(j, m) d[j] += a[i][j];
            }
        }
        bool ok = true;
        rep(j, m) if (d[j] < x) ok = false;
        if (ok)
            ans = min(ans, cost);
    }
    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
