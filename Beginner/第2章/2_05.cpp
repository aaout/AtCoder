#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int sum(int n)
{
    if (n == 0)
        return 0;
    int s = sum(n - 1);
    return s + n;
}

int sum_atob(int a, int b)
{
    if (b == a)
        return a;
    return b + sum_atob(a, b - 1);
    // int s = sum_atob(a, b - 1); より簡潔に書ける
    // return b + s;
}

int array_sum(vector<int> s, int i)
{
    int max = i - 1;
    if (max == 0)
        return s[0];
    return s[max] + array_sum(s, max);
}

//nが素数ならtrue
bool is_prime(int n, int i)
{
    if (n % i == 0)
        return false;
    if (i - 1 == 1)
        return true;
    is_prime(n, i - 1);
}

int main()
{
    int s = 14;
    if (is_prime(s, s - 1))
        cout << "prime" << endl;
    else
        cout << "even" << endl;
}
