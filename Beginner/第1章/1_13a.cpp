#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int sum = 0;
    cin >> N;
    vector<int> res(N);

    for (int i = 0; i < N; i++)
    {
        cin >> res.at(i);
        sum += res.at(i);
    }

    sum /= N;

    for (int i = 0; i < N; i++)
    {
        cout << abs(res.at(i) - sum) << endl;
    }
}
