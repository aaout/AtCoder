#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    // cout << s.size() << endl;
    if (s.size() > k)
    {
        rep(i, k) cout << s[i];
        cout << "..." << endl;
        return 0;
    }
    rep(i, k) cout << s[i];
    cout << endl;
}
