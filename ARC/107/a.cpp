#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int k;
    cin >> k;
    ll sum = 0;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            for (int l = 0; l <= k; l++)
            {
                sum += gcd(i, gcd(j, l));
            }
        }
    }
    cout << sum << endl;
}
