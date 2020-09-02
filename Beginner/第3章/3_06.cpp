#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    char s = 'a';
    char t = 'A';
    char u = '1';
    cout << isupper(s) << endl; //大文字の判定
    cout << isupper(t) << endl;
    cout << islower(s) << endl; //小文字の判定
    cout << islower(t) << endl;
    cout << isdigit(s) << endl; //10進数の判定
    cout << isdigit(u) << endl;
}
