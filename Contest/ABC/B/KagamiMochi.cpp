#include <bits/stdc++.h>
using namespace std;

// バケット法
// バケットは0で初期化
// 同じ数字があったらバケットをインクリメントしていく
// 具体的な数値を入れていくべきなのかも
int main()
{
    int N;
    cin >> N;

    vector<int> d(N);
    for (size_t i = 0; i < N; i++)
    {
        cin >> d[i];
    }

    vector<int> bucket(110, 0);
    for (size_t i = 0; i < N; i++)
    {
        bucket[d[i]]++;
    }

    int res = 0;
    for (size_t i = 1; i <= 100; i++)
    {
        if (bucket[i])
            res++;
    }
    cout << res << endl;
}
