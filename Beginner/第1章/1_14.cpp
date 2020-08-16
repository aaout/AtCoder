#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    cout << "max: " << max(x, y) << endl;
    cout << "min: " << min(x, y) << endl;

    vector<int> data = {1, 2, 3, 4, 5};
    reverse(data.begin(), data.end());

    vector<int> data2 = {2, 5, 6, 2, 1};
    sort(data2.begin(), data2.end());
}
