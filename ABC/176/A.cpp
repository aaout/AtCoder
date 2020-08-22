#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll N, X, T;

//AC
int main()
{
    cin >> N >> X >> T;
    ll x = N / X;
    if (N % X == 0)
    {
        cout << x * T << endl;
    }
    else
    {
        cout << (x + 1) * T << endl;
    }
}
