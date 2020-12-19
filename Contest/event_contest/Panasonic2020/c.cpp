#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    // stringstream ss;
    // ss << oct << 9;
    // string s = ss.str(); // "11"
    // cout << s << endl;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        stringstream ss;
        ss << oct << i;
        string s = ss.str(); //8進数
        string t = to_string(i);
        if (s.find("7") != string::npos || t.find("7") != string::npos)
        {
            sum++;
        }
    }
    cout << n - sum << endl;
}
