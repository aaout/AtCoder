#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = a + b; //乳固形分

    if (sum >= 15 && b >= 8)
    {
        cout << 1 << endl;
    }
    else if (sum >= 10 && b >= 3)
    {
        cout << 2 << endl;
    }
    else if (sum >= 3)
    {
        cout << 3 << endl;
    }
    else
    {
        cout << 4 << endl;
    }
}
