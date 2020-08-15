#include <bits/stdc++.h>
using namespace std;

//stringは複数文字列
//charは単体文字
//文字列の書き換えや比較する際に使用する
//ループと組み合わせると強い
int main()
{
    string str = "Hello";

    cout << str << endl;
    cout << str.size() << endl;
    cout << "HelloWorld"s.size() << endl;
    cout << str.at(0) << endl;
    cout << str.at(1) << endl;
    cout << str.at(2) << endl;
    cout << str.at(3) << endl;
    cout << str.at(4) << endl;

    //比較演算
    str.at(0) = 'M';
    cout << str << endl;
    cout << (str.at(2) == 'l' ? "yes" : "no") << endl;

    //文字数カウント
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (str.at(i) == 'l')
            count++;
    }
    cout << count << endl;

    //文字列の連結は'+'で
    cout << str + " World" << endl;

    //1行受け取る
    string l;
    getline(cin, l);
    cout << l << endl;
}
