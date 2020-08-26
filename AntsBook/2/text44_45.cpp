#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
int N;
char S[2020];

int main()
{
    cin >> N >> S;

    int a = 0, b = N - 1;
    bool left = false;
    while (a <= b)
    {
        for (int i = 0; i <= b - a; i++)
        {
            if (S[a + i] < S[b - i])
            {
                left = true;
                break;
            }
            else if (S[a + i] > S[b - i])
            {
                left = false;
                break;
            }
        }
        if (left)
            putchar(S[a++]);
        else
            putchar(S[b--]);
    }
    cout << endl;
}
