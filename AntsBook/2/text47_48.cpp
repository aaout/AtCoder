#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, r;
    cin >> n >> r;
    vector<int> x(n);
    rep(i, n) cin >> x[i];
    int ans = 0;
    int point = 0;

    while (point < n)
    {
        while (x[point] <= x[point] + r)
        {
            point++;
        }
    }
}
