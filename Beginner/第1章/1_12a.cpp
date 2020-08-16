#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    getline(cin, x);
    int count = x.size();
    int plus = 0, minus = 0;

    for (int i = 1; i < count; i += 2)
    {
        x.at(i) == '+' ? plus++ : minus++;
    }
    cout << 1 + plus - minus << endl;
}
