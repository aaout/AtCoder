#include <bits/stdc++.h>
using namespace std;
using ll = long long;
char S[3];

//AC
//ダサいけどこれでいいらしい
//回答例ではboolを利用していた
int main()
{
    cin >> S;

    if (S[0] == 'R' && S[1] == 'R' && S[2] == 'R')
    {
        cout << 3 << endl;
    }
    else if ((S[0] == 'R' && S[1] == 'R' && S[2] == 'S') || (S[0] == 'S' && S[1] == 'R' && S[2] == 'R'))
    {
        cout << 2 << endl;
    }
    else if (S[0] == 'S' && S[1] == 'S' && S[2] == 'S')
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
}
