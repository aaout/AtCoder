#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//AC
int g1(int x)
{
    string y = to_string(x);
    int len = y.length();
    char tmp;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (y[i] < y[j])
            {
                tmp = y[i];
                y[i] = y[j];
                y[j] = tmp;
            }
        }
    }
    return stoi(y);
}

int g2(int x)
{
    string y = to_string(x);
    int len = y.length();
    char tmp;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (y[i] > y[j])
            {
                tmp = y[i];
                y[i] = y[j];
                y[j] = tmp;
            }
        }
    }
    return stoi(y);
}

int f(int x)
{
    int s = g1(x);
    int t = g2(x);
    return s - t;
}

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        int a = f(n);
        n = a;
    }
    cout << n << endl;
}
