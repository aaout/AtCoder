#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int count = 0;
    for (size_t i = 0; i <= A; i++)
    {
        for (size_t j = 0; j <= B; j++)
        {
            for (size_t k = 0; k <= C; k++)
            {
                if (500 * i + 100 * j + 50 * k == X)
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}
