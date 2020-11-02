#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll calc(ll l, ll r)
{
    return (l + r) * (r - l + 1) / 2;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    rep(i, n)
    {
        cin >> a[i];
        cin >> b[i];
    }
    ll sum = 0;
    rep(i, n)
    {
        sum += calc(a[i], b[i]);
    }
    cout << sum << endl;
}
