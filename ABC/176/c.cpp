#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll N;
ll A[202000];

//AC
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    ll min_h = A[0];
    ll sum = 0;
    for (int i = 1; i < N; i++)
    {
        if (min_h > A[i])
        {
            sum += min_h - A[i];
        }
        else
        {
            min_h = A[i];
        }
    }
    cout << sum << endl;
}
