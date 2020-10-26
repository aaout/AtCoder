#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    string s, t;
    cin >> s >> t;
    int x = s.size();
    int y = t.size();
    rep(i, x)
    {
        if (s[i] != t[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    if (y == x + 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
