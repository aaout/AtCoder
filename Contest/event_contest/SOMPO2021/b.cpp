#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            if (isupper(s[i]))
            {
                cout << "No" << endl;
                return 0;
            }
        }
        else
        {
            if (islower(s[i]))
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}
