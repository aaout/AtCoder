#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    int sum = 0;
    rep(i, m)
    {
        cin >> a[i];
        sum += a[i];
    }
    bool ok = true;
    if (sum > n)
        ok = false;
    if (ok)
        cout << n - sum << endl;
    else
        cout << -1 << endl;
}
