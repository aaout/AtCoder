#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//全探索しろよバカ
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int ans = 1001001001;
    rep(ai, n) rep(bi, n)
    {
        int now = 0;
        if (ai == bi)
            now = a[ai] + b[bi];
        else
            now = max(a[ai], b[bi]);
        ans = min(now, ans);
    }
    cout << ans << endl;
}
