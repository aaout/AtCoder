#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;

    //各行列に何個爆弾があるかカウントする配列
    vector<int> hs(h), ws(w);
    //爆弾を補完するための配列
    //被らないようにsetを使う
    set<P> s;
    rep(i, n)
    {
        int r, c;
        cin >> r >> c;
        --r;
        --c;
        hs[r]++;
        ws[c]++;
        s.emplace(r, c);
    }

    //各行列での爆弾の最大個数を求める
    int mh = 0, mw = 0;
    rep(i, h) mh = max(mh, hs[i]);
    rep(i, w) mw = max(mw, ws[i]);

    //最大個数を含んでいる行列を求めて配列に突っ込む
    vector<int> is, js;
    rep(i, h) if (mh == hs[i]) is.push_back(i);
    rep(i, w) if (mw == ws[i]) js.push_back(i);
    int ans = mh + mw;
    for (auto &&i : is)
    {
        for (auto &&j : js)
        {
            if (s.count(P(i, j)))
                continue;
            cout << ans << endl;
            return 0;
        }
    }
    cout << ans - 1 << endl;
}
