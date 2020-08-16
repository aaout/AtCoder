#include <bits/stdc++.h>
using namespace std;

//for文の簡易的な書き方
//forrangeで補完できる
int main()
{
    vector<int> data{1, 2, 3, 4, 5};
    for (auto &&i : data)
    {
        cout << i << endl;
    }

    string str = "hello";
    for (auto &&i : str)
    {
        if (i == 'l')
            i = 'L';
    }

    cout << str << endl;
}
