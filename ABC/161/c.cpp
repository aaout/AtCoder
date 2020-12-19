#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// AC
int main()
{
    ll n, k;
    cin >> n >> k;
    ll tmp = n % k;
    ll ans = min(tmp, k - tmp);
    cout << ans << endl;
}
