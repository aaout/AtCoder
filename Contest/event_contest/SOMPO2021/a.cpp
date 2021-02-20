#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    int x;
    cin >> x;
    int count = 0;
    while (1)
    {
        x++;
        if (x % 100 == 0)
        {
            cout << count + 1 << endl;
            return 0;
        }
        count++;
    }
}
