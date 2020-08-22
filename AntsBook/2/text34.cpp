#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, k;
ll a[30];

//深さ優先探索は再帰で書ける
//i
//bool型の関数でreturn sum == k;のように書くと上手い
bool dfs(ll i, ll sum)
{
    if (i == n)
        return sum == k;

    if (dfs(i + 1, sum))
        return true;

    if (dfs(i + 1, sum + a[i]))
        return true;

    return false;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;

    if (dfs(0, 0))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
