#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    int a;
    cin >> a;
    cout << a * (1 + a + pow(a, 2)) << endl;
}
