#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//TLE
//sort部分がダメっぽい
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll a_min = a[0];
    ll a_max = a[n - 1];
    while (1)
    {
        sort(a.begin(), a.end());
        a_min = a[0];
        a_max = a[n - 1];
        if (a_min == a_max)
        {
            cout << a_min << endl;
            return 0;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == a_max)
                a[i] -= a_min;
            else
                break;

            rep(i, n) cout << a[i] << ' ';
            cout << endl;
        }
    }
}
