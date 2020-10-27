#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int x;
    cin >> x;
    for (int i = 1; i < 1000; i++)
    {
        ll a5 = 1;
        rep(s, 5) a5 *= i;
        for (int j = -1000; j < 1000; j++)
        {
            ll b5 = 1;
            rep(t, 5) b5 *= j;
            if (a5 - b5 == x)
            {
                cout << i << ' ' << j << endl;
                return 0;
            }
        }
    }
}
