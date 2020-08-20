#include <bits/stdc++.h>
using namespace std;

//WA
//文字列同士で足し引きができる
//-'a'とすることでアルファベットを0-26の数字に変換
int main()
{
    string s;
    cin >> s;

    vector<int> bucket(26, 0);
    for (size_t i = 0; i < 26; i++)
    {
        bucket[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (bucket[i] == 0)
        {
            cout << (char)('a' + i) << endl;
            return 0;
        };
    }
    cout << "None" << endl;
}
