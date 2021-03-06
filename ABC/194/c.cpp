#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// N < 3 * 1e5
// 2重ループだと間に合わない
// j ではなく

const int MaxA = 200;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    ll ans = 0;
    rep(i, n) cin >> a[i];
    vector<int> d(MaxA * 2 + 1); //マイナス対策
    rep(i, n)
    {
        for (int aj = -MaxA; aj < MaxA; aj++)
        {
            int c = d[MaxA + aj];
            int x = a[i] - aj;
        }
    }
}
