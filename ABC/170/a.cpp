#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    vector<int> x(5);
    rep(i, 5) cin >> x[i];
    rep(i, 5)
    {
        if (x[i] == 0)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
