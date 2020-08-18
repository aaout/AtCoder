#include <bits/stdc++.h>
using namespace std;

//三色は確定しているので
//残りの一色のみ判定すればよい

int main()
{
    int N;
    int p = 0, w = 0, g = 0, y = 0;
    string S;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> S;
        if (S == "P")
        {
            p++;
        }
        else if (S == "W")
        {
            w++;
        }
        else if (S == "G")
        {
            g++;
        }
        else if (S == "Y")
        {
            y++;
        }
    }

    cout << ((p && w && g && y) ? "Four" : "Three") << endl;
}
