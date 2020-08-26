#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
int n;
const int MAX_N = 1000010;
ll s[MAX_N], t[MAX_N];
P itv[MAX_N];

int main()
{
    cin >> n;
    rep(i, n)
    {
        cin >> s[i] >> t[i];
    }
    rep(i, n)
    {
        itv[i] = P(t[i], s[i]);
    }
    sort(itv, itv + n);
    int ans = 0, endtime = 0;
    rep(i, n)
    {
        if (endtime < itv[i].second)
        {
            ans++;
            endtime = itv[i].first;
        }
    }
    cout << ans << endl;
}
