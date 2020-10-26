#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int sum = a + b;
    if (sum >= k)
        if (a >= k)
            cout << k << endl;
        else
            cout << a << endl;
    else
    {
        int tmp = k - sum;
        cout << a - tmp << endl;
    }
}
