#include <bits/stdc++.h>
using namespace std;

//範囲for に注意
//2で割れる数が最も少ないものに注目しても良い
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    int count = 0;

    for (size_t i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    while (1)
    {
        bool exist_add = false;
        for (auto &&i : A)
        {
            if (i % 2 == 1)
            {
                exist_add = true;
            }
        }

        if (exist_add)
            break;

        for (auto &&i : A)
        {
            i /= 2;
        }

        count += 1;
    }

    cout << count << endl;
}
