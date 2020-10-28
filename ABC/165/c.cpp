#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> s(q, vector<int>(3));
    vector<ll> d(q);
    rep(i, q)
    {
        rep(j, 3) cin >> s[i][j];
        cin >> d[i];
    }
}
