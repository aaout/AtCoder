#include <bits/stdc++.h>
using namespace std;
int N;
int L[110];

//AC
//最初っからソートしとけばなおよし
//条件減らして書ける
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            for (int k = j; k < N; k++)
            {
                if (L[i] != L[j] && L[i] != L[k] && L[j] != L[k])
                {
                    vector<int> check = {L[i], L[j], L[k]};
                    sort(check.begin(), check.end());
                    if (check[0] + check[1] > check[2])
                        count++;
                }
            }
        }
    }
    cout << count << endl;
}
