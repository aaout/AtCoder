#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 切り捨てが出来んかった
int main()
{
    ll x;
    cin >> x;
    ll deposit = 100;
    int year = 0;
    while (deposit < x)
    {
        // deposit *= 1.01;　これだと切り捨てが上手くいかない
        // doubleが絡んでくるから精度がバグる
        deposit += deposit / 100;
        year++;
    }
    cout << year << endl;
}
