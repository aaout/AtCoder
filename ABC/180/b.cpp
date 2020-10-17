#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//wa(原因不明)
//要求通りに出力出来てる
int main()
{
    int n;
    cin >> n;
    vector<ll> x(n);
    rep(i, n) cin >> x[i];
    rep(i, n) x[i] = abs(x[i]);
    ll manhattan = accumulate(x.begin(), x.end(), 0);
    ll cyebisyefu = *max_element(x.begin(), x.end());
    rep(i, n) x[i] = pow(x[i], 2);
    ll tmp = accumulate(x.begin(), x.end(), 0);
    long double euclid = sqrt(tmp);
    cout << manhattan << endl;
    cout << fixed << setprecision(15) << euclid << endl;
    cout << cyebisyefu << endl;
}
