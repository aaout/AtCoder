#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    int x, y;
    cin >> x >> y;
    rep(i, x + 1) rep(j, x + 1)
    {
        if ((i + j == x) && (i * 2 + j * 4 == y)) //動物の総数条件+足の総数条件
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
