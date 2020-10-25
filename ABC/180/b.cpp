#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//wa(原因不明)　← 関数使用したことでoverflowしてるっぽい
//普通のfor文で書けばよさそう
//要求通りに出力出来てる
int main()
{
    int n;
    cin >> n;
    vector<ll> x(n);
    rep(i, n) cin >> x[i];

    // {}でスコープすることで変数の管理が楽になる
    {
        ll ans = 0;
        rep(i, n) ans += abs(x[i]);
        cout << ans << endl;
    }
    {
        ll ans = 0;
        rep(i, n) ans += x[i] * x[i];
        printf("%.10f\n", sqrt(ans)); // 小数点指定はprintfのほうが楽
    }
    {
        ll ans = 0;
        rep(i, n) ans = max(ans, abs(x[i]));
        cout << ans << endl;
    }
}
