#include <bits/stdc++.h>
using namespace std;

int findSumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    { // n が 0 になるまで
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int total = 0;

    for (int i = 1; i <= N; i++)
    {
        int s = findSumOfDigits(i);
        if (A <= s && s <= B)
            total += i;
    }

    cout << total << endl;
}
