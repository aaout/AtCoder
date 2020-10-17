#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> ans;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (i == sqrt(n))
        {
            ans.push(i);
        }
        else if (n % i == 0)
        {
            ans.push(i);
            ans.push(n / i);
        }
    }
    while (!ans.empty())
    {
        cout << ans.top() << endl;
        ans.pop();
    }
}
