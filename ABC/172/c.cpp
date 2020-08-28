#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//初見×
//2重forは間に合わない
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int A[n], B[m];
    rep(i, n) cin >> A[i];
    rep(i, m) cin >> B[i];
    //0からの総和
    int sa[n], sb[m];
    sa[0] = 0;
    sb[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        sa[i] = A[i - 1] + sa[i - 1];
    }
    for (int i = 1; i <= m; i++)
    {
        sb[i] = B[i - 1] + sb[i - 1];
    }
    rep(i, n + 1) cout << sa[i] << endl;
    rep(i, m + 1) cout << sb[i] << endl;

    //sbは降順で求めたほうが早い
    int ans = 0, j = m;
    rep(i, n)
    {
        if (sa[i + 1] > k)
            break;
        while (sb[j + 1] > k - sa[i + 1])
        {
            j--; //Aからi冊、Bからj冊読むことになる
        }
        //最大値を更新していく
    }
    cout << ans << endl;
}
