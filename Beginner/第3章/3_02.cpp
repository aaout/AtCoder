#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    int n;
    cin >> n;
    P p[n];
    //二つ目の値をfirstとして読み込む
    rep(i, n) cin >> p[i].second >> p[i].first;
    sort(p, p + n);
    //表示するときは逆にする
    rep(i, n) cout << p[i].second << ' ' << p[i].first << endl;
}
