#include <bits/stdc++.h>
using namespace std;

//配列の定義とイニシャライズについて
int main()
{
    vector<int> vec(3);
    vec = {35, 100, 64};
    cout << vec.at(0) << endl;
    cout << vec.at(1) << endl;
    cout << vec.at(2) << endl;

    // int N;
    // cin >> N;
    // vector<int> math(N);

    // for (int i = 0; i < N; i++)
    // {
    //     cin >> math.at(i);
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     cout << math.at(i);
    // }
    // cout << endl;

    //配列の初期化
    vector<int> vex(3, 0);

    //2次元配列
    vector<vector<char>> data(3, vector<char>(4, '#'));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << data.at(i).at(j);
        }
        cout << endl;
    }
}
