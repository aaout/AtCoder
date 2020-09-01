#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//構造体
//classと同じような用途
struct test_struct
{
    //メンバ変数
    int x;
    string y;

    //メンバ関数
    void print_x()
    {
        cout << x << endl; //メンバ変数にアクセスできる
    }
    void print_y()
    {
        cout << y << endl;
    }
};

struct UnionFind
{
    vector<int> d; //rankと親情報を同時に管理
    //メンバ初期化子リスト
    //-1で初期化する
    UnionFind(int n = 0) : d(n, -1) {}
    int find(int x)
    {
        //もし0より小さい,つまり根ならindexの値を返す
        if (d[x] < 0)
            return x;
        return d[x] = find(d[x]); //nodeの場合はメモ化しつつ親をたどる
    }
    bool unite(int x, int y)
    {
        x = find(x);
        y = find(y);
        if (x == y) //親が同じである場合
            return false;
        if (d[x] > d[y])
            swap(x, y);
        d[x] += d[y]; // d[x]のほうがrankが大きい,つまりd[x]が小さい(-1でインクリメント)
        d[y] = x;     //小さいほうを大きいほうにくっつける
        return true;
    }
    bool same(int x, int y) { return find(x) == find(y); }
    int size(int x) { return -d[find(x)]; }
};

int main()
{
    // test_struct p;
    // cin >> p.x >> p.y;
    // cout << p.x << '\0' << p.y << endl;
    // p.print_x();
    // p.print_y();

    test_struct q[3];
    rep(i, 3) cin >> q[i].x >> q[i].y; // この書き方で代入できる
    rep(i, 3)
    {
        q[i].print_x();
        q[i].print_y();
    }
}
