#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 法則見つけられた
// 定式化するまでもう一歩
ll calc(ll a, ll b, ll x)
{
    ll ans = a * x / b - a * (x / b);
    return ans;
}

int main()
{
    ll a, b, n;
    cin >> a >> b >> n;
    if (n < b)
    {
        ll x = n;
        cout << calc(a, b, x) << endl;
    }
    else
    {
        ll x = b - 1;
        cout << calc(a, b, x) << endl;
    }
}
