#include <bits/stdc++.h>
using namespace std;

//参照渡し
//無駄なコピーを減らす and 代入の省略
//宣言時に参照先を明記する
int f(int &x)
{
    x = x * 2;
    return x;
}

void min_and_max(int a, int b, int c, int &minimum, int &maximum)
{
    minimum = min(a, min(b, c));
    maximum = max(a, max(b, c));
}

int main()
{
    int a = 3;
    int b = f(a);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    //変数の定義のみ
    //参照渡しすることで代入している
    int minimum, maximum;
    int x, y, z;
    cin >> x >> y >> z;
    min_and_max(x, y, z, minimum, maximum);
    cout << minimum << '\n'
         << maximum << endl;

    //範囲for文と参照渡しを組み合わせると強い
    //strを上書きしている
    vector<int> str = {1, 3, 5, 7};
    for (int &i : str)
    {
        i = i * 2;
    }
    for (size_t i = 0; i < str.size(); i++)
    {
        cout << str.at(i) << ' ';
    }
    cout << endl;
}
