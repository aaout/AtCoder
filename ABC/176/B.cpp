#include <bits/stdc++.h>
using namespace std;
char N[200010];

//WA
//数値で扱おうとするとメモリが足りないので文字列として扱う
//わざわざ関数を用意しなくても各位の和を求めれば行ける
// int findSumOfDigits(ll n)
// {
//     ll sum = 0;
//     while (n > 0)
//     {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }

int main()
{
    cin >> N;
    int len = strlen(N);
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += N[i] - '0';
    }

    if (sum % 9 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
