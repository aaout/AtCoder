#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// DFSにすると変数の扱いがしんどくなるのでグローバル
int n, m, q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int> A)
{
    // 終了条件
    //　スコアnowの計算
    if (A.size() == n + 1)
    {
        int now = 0;
        rep(i, q)
        {
            if (A[b[i]] - A[a[i]] == c[i])
                now += d[i];
        }
        ans = max(ans, now);
        return;
    }
    // back()で配列の末尾の要素を取得
    A.push_back(A.back());
    while (A.back() <= m)
    {
        dfs(A);
        rep(i, A.size()) cout << A[i];
        cout << endl;
        A.back()++;
    }
}

int main()
{
    cin >> n >> m >> q;
    a = b = c = d = vector<int>(q); //これで初期化できる
    rep(i, q)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    dfs(vector<int>(1, 1));
    cout << ans << endl;
}
