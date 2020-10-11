#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    char s, t;
    cin >> s >> t;
    if (s == 'N')
    {
        cout << t << endl;
        return 0;
    }

    if (s == 'Y')
    {
        cout << (char)toupper(t) << endl;
        return 0;
    }
}
