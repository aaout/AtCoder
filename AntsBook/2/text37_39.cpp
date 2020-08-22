#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 100000000;

typedef pair<int, int> P;
typedef tuple<int, int, char> field;
int main()
{
    queue<P> p;
    p.push(P(1, 2));
    p.push(P(3, 4));
    p.push(P(5, 6));
    p.push(P(7, 8));

    while (!p.empty())
    {
        cout << p.front().first << ' ' << p.front().second << endl;
        p.pop();
    }

    queue<field> f;
    f.push(field(1, 2, '#'));
    f.push(field(3, 4, '$'));
    f.push(field(5, 6, '%'));
    f.push(field(7, 8, '&'));
    while (!f.empty())
    {
        int a = get<0>(f.front());
        int b = get<1>(f.front());
        char c = get<2>(f.front());
        cout << a << ' ' << b << ' ' << c << endl;
        f.pop();
    }
}
