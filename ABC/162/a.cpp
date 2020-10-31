#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    char n[3];
    bool ok = false;
    rep(i, 3)
    {
        cin >> n[i];
        if (n[i] == '7')
            ok = true;
    }
    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
