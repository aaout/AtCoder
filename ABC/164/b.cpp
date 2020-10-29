#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // P.first == 体力　P.second == 攻撃力
    P tak(a, b);
    P aok(c, d);
    while (1)
    {
        aok.first -= tak.second;
        if (aok.first <= 0)
        {
            cout << "Yes" << endl;
            return 0;
        }

        tak.first -= aok.second;
        if (tak.first <= 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }
}
