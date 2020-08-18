#include <bits/stdc++.h>
using namespace std;

//配列の長さは指定すること
//sort, reverse使えるように
//奇数偶数の判定を&で行う
int main()
{
    int N;
    cin >> N;
    vector<int> card(N);

    for (size_t i = 0; i < N; i++)
    {
        cin >> card[i];
    }
    sort(card.begin(), card.end());
    reverse(card.begin(), card.end());

    int Alice = 0, Bob = 0;
    for (size_t i = 0; i < N; i++)
    {
        if (i & 1 == 1)
        {
            Bob += card[i];
        }
        else
        {
            Alice += card[i];
        }
    }

    int res = Alice - Bob;
    cout << res << endl;
}
