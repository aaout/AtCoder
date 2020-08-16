#include <bits/stdc++.h>
using namespace std;

//2重ループについて
//breakの使い方に注意
int main()
{
    int sum = 0;
    vector<vector<int>> data(3, vector<int>(4));
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            data.at(i).at(j) = sum;
            sum++;
        }
    }

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (data.at(i).at(j) == 5)
                break;
            cout << data.at(i).at(j) << "   ";
        }
        cout << endl;
    }

    cout << endl;

    bool finished = false;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (data.at(i).at(j) == 5)
            {
                finished = true;
                break;
            }
            cout << data.at(i).at(j) << "   ";
        }
        cout << endl;
        if (finished == true)
            break;
    }
}
