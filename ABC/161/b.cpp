#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int sum = 0;
    rep(i, n) sum += a[i];
    double choise = 4 * m;
    choise = 1 / choise;
    choise *= sum;
    int count = 0;
    rep(i, n)
    {
        if (choise <= a[i])
            count++;
    }
    if (count >= m)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
