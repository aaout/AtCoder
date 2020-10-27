#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// AC
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> d(k);
    set<int> s; // 重複のないように
    rep(i, k)
    {
        cin >> d[i];
        vector<int> a(d[i]);
        rep(j, d[i])
        {
            cin >> a[j];
            s.insert(a[j]);
        }
    }
    cout << n - s.size() << endl;
}
