#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, n)
    {
        vec[i] = i + 1;
        if (vec[i] % 3 == 0 || vec[i] % 5 == 0)
            vec[i] = 0;
    }
    ll sum = 0;
    rep(i, n) sum += vec[i];
    cout << sum << endl;
}
