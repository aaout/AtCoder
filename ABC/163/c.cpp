#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n - 1);
    rep(i, n - 1) cin >> a[i];
    vector<int> ans(n, 0);
    rep(i, n - 1)
    {
        ans[a[i] - 1]++;
    }
    rep(i, n) cout << ans[i] << endl;
}
