#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 理解はした
// 書き方真似したい
int main()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> s;              //何番目に通過したか確認する配列
    vector<int> ord(n + 1, -1); //通過したか否かをチェック
    int c = 1, l = 0;
    {
        int v = 1; // 1 からスタート
        while (ord[v] == -1)
        {
            ord[v] = s.size(); // 通過観測
            s.push_back(v);    // 通過観測
            v = a[v - 1];      // ワープ　indexのズレに注意
        }
        c = s.size() - ord[v]; // 周期
        l = ord[v];            // 例外長
    }
    if (k < l)
        cout << s[k] << endl;
    else
    {
        k -= l;
        k %= c;
        cout << s[l + k] << endl;
    }
}
