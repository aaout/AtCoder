#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> a(3 * N);
    for (size_t i = 0; i < 3 * N; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int sum = 0;
    for (size_t i = 1; i <= N; i++)
    {
        cout << a[i] << endl;
        sum += a[i];
    }
    cout << sum << endl;
}
