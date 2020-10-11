#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    int tmp[200001] = {0};
    int min_num = 0;
    rep(i, n)
    {
        tmp[p[i]] = 1;
        for (int j = min_num; j < 200010; j++)
        {
            if (tmp[j] == 0)
            {
                min_num = j;
                cout << j << endl;
                break;
            }
        }
    }
}
