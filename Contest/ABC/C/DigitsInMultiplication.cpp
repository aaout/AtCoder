#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll N;

//1 <= N <= 10^10なので
//1回のfor文すら回せない
//N = A * B なので√Nまで探索すればok
//入力数値が大きいからintの範囲外(-2,147,483,648 ～ 2,147,483,647)
//基本的にAtCoderではlong long(-9,223,372,036,854,775,808 ～ 9,223,372,036,854,775,807)を使うように
// using ll = long long;
//桁数はlog10(x) + 1で求まる
int findDigit(ll x, ll y)
{
    ll s, t;
    s = log10(x) + 1;
    t = log10(y) + 1;
    return max(s, t);
}

int main()
{
    cin >> N;
    ll s = sqrt(N);

    ll res = N;
    for (int i = 1; i <= s; i++)
    {
        if (N % i == 0)
        {
            int F = findDigit(i, N / i);
            if (F < res)
                res = F;
        }
    }
    cout << res << endl;
}
