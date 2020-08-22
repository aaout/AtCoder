#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
ll N;

//WA
int findSumOfDigits(ll n)
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    cin >> N;
    ll res = findSumOfDigits(N);
    if (res % 9 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
