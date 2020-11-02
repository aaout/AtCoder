#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                string t = {s[i], s[j], s[k]};
                int u = stoi(t);
                if (u % 8 == 0)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
                t = {s[i], s[k], s[j]};
                u = stoi(t);
                if (u % 8 == 0)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
                t = {s[j], s[i], s[k]};
                u = stoi(t);
                if (u % 8 == 0)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
                t = {s[j], s[k], s[i]};
                u = stoi(t);
                if (u % 8 == 0)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
                t = {s[k], s[i], s[j]};
                u = stoi(t);
                if (u % 8 == 0)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
                t = {s[k], s[j], s[i]};
                u = stoi(t);
                if (u % 8 == 0)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
}
