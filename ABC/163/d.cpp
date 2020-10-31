#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll sum(ll l, ll r)
{
    return (l + r) * (r - l + 1) / 2;
}

// 問題の置き換えが出来ず
int main()
{
    int n, k;
    cin >> n >> k;
    ll ans = 0;
    for (int i = k; i <= n + 1; i++)
    {
        ll l = sum(0, i - 1), r = sum(n - i + 1, n);
        ans += r - l + 1;
    }
    ans %= 1'000'000'007;
    cout << ans << endl;
}
