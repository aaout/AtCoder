#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int gcd(int x, int y)
{
    if (x % y == 0)
    {
        return y;
    }
    else
    {
        return gcd(y, x % y);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int ans = 0;
    int gcd = 0;
    sort(a.begin(), a.end());
    set<int> b;
    rep(i, n)
    {
        int tmp = a[i];
        cout << tmp << endl;
        for (int j = 0; j * j <= tmp; ++j)
        {
            if (tmp % j == 0)
            {
                b.insert(j);
                if (tmp / i != i)
                    b.insert(tmp / i);
            }
        }
    }
    cout << "test" << endl;
    for (auto value : b)
        cout
            << value << endl;

    // rep(i, n)
    // {
    //     gcd = 0;
    //     rep(j, n)
    //     {
    //         int tmp = a[j] % a[i];
    //         if (tmp == 0)
    //             gcd++;
    //     }
    //     b[i] = gcd;
    // }
    // ans = max_element(b.begin(), b.end()) - b.begin();
    // cout << a[ans] << endl;
}
