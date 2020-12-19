#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> sum_a(n + 1, 0);
    rep(i, n) cin >> a[i];
    rep(i, n) sum_a[i + 1] = sum_a[i] + a[i];
    rep(i, n) cout << sum_a[i] << endl;

    ll sum = 0;
    rep(i, n) rep(j, i)
    {
        int x = abs(a[i] - a[j]);
        sum += x;
    }
    cout << sum << endl;
}
