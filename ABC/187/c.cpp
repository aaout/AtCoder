#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    set<string> check;
    rep(i, n)
    {
        if (s[i][0] != '!')
        {
            string tmp = '!' + s[i];
            if (check.count(tmp))
            {
                cout << s[i] << endl;
                return 0;
            }
            else
            {
                check.insert(s[i]);
                check.insert(tmp);
            }
        }
        else
        {
            string tmp = s[i].erase(0, 1);
            if (check.count(tmp))
            {
                cout << tmp << endl;
                return 0;
            }
            else
            {
                check.insert(s[i]);
                check.insert(tmp);
            }
        }
    }
    cout << "satisfiable" << endl;
}
