#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    const int x = 3;
    rep(i, 1 << x)
    {
        cout << i << endl; //整数
        bitset<x> s(i);
        cout << s << endl; //bit列
    }
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int ans = 0;
    rep(i, 1 << n)
    {
        rep(j, n)
        {
            if (i >> j & 1)
                ans += a[j];
        }
        if (ans == k)
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            ans = 0;
        }
    }
    cout << "NO" << endl;
}
