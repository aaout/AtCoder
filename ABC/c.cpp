#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = unsigned long long;
using P = pair<int, int>;
const ll MOD = 1000000007;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    ll sum = 0;
    rep(i, n - 1) for (int j = i + 1; j < n; j++)
    {
        ll tmp = a[i] * a[j];
        // cout << tmp << endl;
        // cout << a[i] << ' ' << a[j] << ' ' << tmp << endl;
        while (tmp / MOD)
        {
            tmp = tmp % MOD;
        }
        sum += tmp;
    }
    cout << sum << endl;
}
