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
    char x = s[s.size() - 1];
    if (x != 's')
        cout << s << 's' << endl;
    else
        cout << s << "es" << endl;
}
