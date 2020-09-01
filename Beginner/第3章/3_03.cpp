#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//STLのコンテナ
int main()
{
    //map key, valueの扱い
    cout << "map" << endl;
    map<string, int> test_map;
    test_map["aaout"] = 100;
    test_map["shizo"] = 12;
    test_map["naineji"] = 395;
    // cout << test_map["aaout"] << endl;
    // cout << "a" << endl;
    // cout << (char)('a' + 1) << endl;   // char型は足し算可能
    // cout << (string)("a" + 1) << endl; // stringは足し算不可能
    map<char, int> char_map;
    rep(i, 5) char_map['a' + i] = i;
    rep(i, 5) cout << char_map['a' + i] << endl;
    cout << endl;
    for (auto &&i : char_map)
    {
        cout << i.first << ' ' << i.second << endl; //i.first:key i.second:value
    }

    //priority_queue
    //追加した要素のうち大きいものから取り出す
    cout << "priority_queue" << endl;
    priority_queue<int> pq;
    rep(i, 5) pq.emplace(i);
    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    //set
    cout << endl;
    cout << "set" << endl;
    set<int> test_set;
    rep(i, 5) test_set.insert(i);
    rep(i, 5)
    {
        if (test_set.count(i + 2))
            continue;
        else
            cout << "append" << endl;
        test_set.insert(i + 2);
    }
    //setの中身を表示するときは範囲forが便利
    for (auto &&i : test_set)
    {
        cout << i << endl;
    }

    //deque(デック)
    cout << endl;
    cout << "deque" << endl;
    deque<int> test_deque;
    rep(i, 3)
    {
        test_deque.push_back(i);
        test_deque.push_front(i + 10);
    }
    for (auto &&i : test_deque)
    {
        cout << i << endl;
    }
    cout << test_deque.back() << endl;
}
