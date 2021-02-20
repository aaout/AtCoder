#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//WA
class Radix
{
private:
    const char *s;
    int a[128];

public:
    Radix(const char *s = "0123456789ABCDEF") : s(s)
    {
        int i;
        for (i = 0; s[i]; ++i)
            a[(int)s[i]] = i;
    }
    std::string to(long long p, int q)
    {
        int i;
        if (!p)
            return "0";
        char t[64] = {};
        for (i = 62; p; --i)
        {
            t[i] = s[p % q];
            p /= q;
        }
        return std::string(t + i + 1);
    }
    std::string to(const std::string &t, int p, int q)
    {
        return to(to(t, p), q);
    }
    long long to(const std::string &t, int p)
    {
        int i;
        long long sm = a[(int)t[0]];
        for (i = 1; i < (int)t.length(); ++i)
            sm = sm * p + a[(int)t[i]];
        return sm;
    }
};

char maxchar(string x)
{
    int len = x.length();
    char y = x[0];
    rep(i, len)
    {
        if (x[i] > y)
            y = x[i];
    }
    return y;
}

int main()
{
    Radix r;
    string x;
    ll m;
    cin >> x >> m;
    char maxnum = maxchar(x);
    int maxnum2 = ctoi(maxnum);
    maxnum++;
    cout << maxnum << endl;
    int count = 0;
    while (1)
    {
        string tmp = r.to(x, maxnum, 10);
        int comp = stoi(tmp);
        if (comp <= m)
        {
            count++;
        }
        else
        {
            cout << count << endl;
            return 0;
        }
    }
}
