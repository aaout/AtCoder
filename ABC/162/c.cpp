#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// gcd再帰で書けるように
//要復習
int main()
{
    int n;
    cin >> n;
    ll ans = 0;
    rep(i, n) rep(j, n) rep(k, n) ans += gcd(i, gcd(j, k));
    cout << ans << endl;
    return 0;
}
