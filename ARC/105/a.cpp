#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    vector<ll> cookie(4);
    rep(i, 4) cin >> cookie[i];
    ll sum = accumulate(cookie.begin(), cookie.end(), 0);
    rep(i, 4)
    {
        ll tmp = sum - cookie[i];
        if (tmp == cookie[i])
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            ll eat = cookie[i] + cookie[j];
            ll tmp = sum - eat;
            if (tmp == eat)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
