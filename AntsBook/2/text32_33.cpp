#include <bits/stdc++.h>
using namespace std;

//stack, queueの使い方
int main()
{
    stack<int> s;
    for (int i = 0; i < 5; i++)
    {
        s.push(i);
    }
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    cout << endl;

    queue<int> q;
    for (int i = 0; i < 5; i++)
    {
        q.push(i);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
