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
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        int tmp = n - i;
        double root = sqrt(tmp);
        for (int j = 1; j <= (int)root; j++)
        {
            if (tmp % j != 0)
                continue;
            if (tmp / j == root)
                cnt++;
            else
                cnt += 2;
        }
    }
    cout << cnt << endl;
}
