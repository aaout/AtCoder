#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 複数配列の扱い要復習
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    vector<bool> ok(n, true);
    rep(i, n) cin >> h[i];
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;

        //indexに合わせるため
        --a;
        --b;
        if (h[a] <= h[b])
            ok[a] = false;
        if (h[b] <= h[a])
            ok[b] = false;
    }
    int ans = 0;
    rep(i, n)
    {
        if (ok[i] == true)
            ans++;
    }
    cout << ans << endl;
}
