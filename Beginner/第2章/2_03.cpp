#include <bits/stdc++.h>
using namespace std;
int N, M;

int main()
{
    cin >> N >> M;
    vector<vector<char>> score(N, vector<char>(N, '-'));

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;

        score.at(a - 1).at(b - 1) = 'o';
        score.at(b - 1).at(a - 1) = 'x';
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << score.at(i).at(j);

            //ここ上手い
            //行末で改行 or 空白の判定をしている
            if (j == N - 1)
            {
                cout << endl;
            }
            else
            {
                cout << " ";
            }
        }
    }
}
