#include <bits/stdc++.h>
using namespace std;
int A, B;

int main()
{
    cin >> A >> B;

    cout << "A:";
    while (A)
    {
        cout << "]";
        A--;
    }
    cout << endl;

    cout << "B:";
    while (B)
    {
        cout << "]";
        B--;
    }
    cout << endl;
}
