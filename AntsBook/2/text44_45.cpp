#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
int N;
char S[2020];

//両端の比較のみでは不十分であることに気づけるかどうか
int main()
{
    cin >> N >> S;

    int a = 0, b = N - 1;
    //boolで左右どちらが大きいか判断
    //この書き方も慣れたいところ
    bool left = false;
    while (a <= b)
    {
        for (int i = 0; i <= b - a; i++)
        {
            //S[a + i] = S[b - i] の時はスルー
            //どちらかが大きくなるまでforが回る
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

        //一字出力すると共にどちらかをインクリメント
        if (left)
            putchar(S[a++]);
        else
            putchar(S[b--]);
    }
    cout << endl;
}
