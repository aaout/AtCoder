#include <bits/stdc++.h>
using namespace std;

//プロトタイプ宣言
void hello(string text);
int add(int x, int y);
int add5(int x);

int main()
{
    cout << add(3, 5) << endl;
    hello("world!!");

    int s = 7;
    int t;

    //変数スコープに注意
    //sは上書きされないためtに代入
    t = add5(s);
    cout << s << '\n'
         << t << endl;
}

//関数定義
int add(int x, int y)
{
    return x + y;
}

//voidで定義したときはreturn宣言しなくてよい
void hello(string text)
{
    cout << "Hello " << text << endl;
}

int add5(int x)
{
    return x + 5;
}
