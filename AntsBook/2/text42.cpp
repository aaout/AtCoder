#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
const int V[6] = {1, 5, 10, 50, 100, 500};
int C[6];
int A;

// 貪欲法
// minのところ書けるように
int main()
{
    rep(i, 6)
    {
        cin >> C[i];
    }
    cin >> A;

    int ans = 0;
    for (int i = 5; i >= 0; i--)
    {
        int t = min(A / V[i], C[i]); // min(最大払える回数, 手持ち)
        A -= t * V[i];
        ans += t;
    }
    cout << ans << endl;
}
