#include <bits/stdc++.h>
using namespace std;

//初見×
//下手に文字列に変換しない
//stoi, atoiなどで変換もできる
int main()
{
    int A, B;
    int count = 0;
    cin >> A >> B;

    for (int i = A; i <= B; i++)
    {
        int s = i % 10, t = i / 10000 % 10;
        int u = i / 10 % 10, v = i / 1000 % 10;
        if (s == t && u == v)
            count++;
    }
    cout << count << endl;
}
