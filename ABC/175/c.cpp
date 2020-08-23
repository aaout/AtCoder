#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll X, K, D;

// 初見×
// 値が大きいので毎ステップシミュレーションはキツイ
// K * Dもオーバーフローしてしまうので工夫が必要
// とりあえず行けるとこまで0に近づく
// その後0付近を行き来して解を求める
int main()
{
    cin >> X >> K >> D;
    X = abs(X);

    ll straight = min(K, X / D);
    K -= straight;
    X -= straight * D;

    if (K % 2 == 0)
        cout << X << endl;
    else
        cout << D - X << endl;
}
