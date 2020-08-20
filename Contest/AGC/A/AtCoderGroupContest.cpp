#include <bits/stdc++.h>
using namespace std;

//WA
//大きいほうから選択するとグループの中で最大になってしまう可能性がある
//どれほど状況をイメージ出来るか次第
//https://img.atcoder.jp/agc012/editorial.pdf
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
        sum += a[i * 2 - 1];
    }
    cout << sum << endl;
}
