#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int a, b;
    cin >> a >> b;
    int suma = 0;
    int sumb = 0;
    for (int i = 0; i < 3; i++)
    {
        suma += a % 10;
        sumb += b % 10;
        a /= 10;
        b /= 10;
    }
    if (suma >= sumb)
        cout << suma << endl;
    else
        cout << sumb << endl;
}
