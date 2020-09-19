#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    int n;
    cin >> n;
    P d[n];
    rep(i, n) cin >> d[i].first >> d[i].second;
    rep(i, n - 2)
    {
        if (d[i].first == d[i].second && d[i + 1].first == d[i + 1].second && d[i + 2].first == d[i + 2].second)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
