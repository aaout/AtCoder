#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n)                 \
    for (int i = 0; i < (n); ++i) \
        ;
int K;

int main()
{
    cin >> K;
    int x = 7 % K;
    set<int> s;
    int i = 1;
    while (s.count(x) == 0)
    {
        if (x == 0)
        {
            cout << i << endl;
            return 0;
        }
        s.insert(x);
        x = (x * 10 + 7) % K; // mod の計算法則より
        ++i;
    }
    cout << -1 << endl;
}
