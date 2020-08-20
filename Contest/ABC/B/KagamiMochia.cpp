#include <bits/stdc++.h>
using namespace std;

//set<>で重複を除いた配列を作ることが出来る
//こっちのが便利かも
int main()
{
    int N;
    cin >> N;

    vector<int> d(N);
    for (size_t i = 0; i < N; i++)
    {
        cin >> d[i];
    }

    set<int> values;
    for (size_t i = 0; i < N; i++)
    {
        values.insert(d[i]);
    }

    cout << values.size() << endl;
}
