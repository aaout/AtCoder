#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};

int main()
{
    int h, w;
    cin >> h >> w;
    int si, sj;
    cin >> si >> sj;
    int ti, tj;
    cin >> ti >> tj;

    //配列で扱えるようにデクリメント
    --si;
    --sj;
    --ti;
    --tj;

    //各状態
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    const int INF = 1e9; //未到達マスはINFで表現
    //スタートからの距離を表す配列を用意。INFで初期化
    vector<vector<int>> dist(h, vector<int>(w, INF));
    dist[si][sj] = 0;

    //deque(デック)で管理
    //前後から出入りできるqueue
    //コストがかからないものは左から、かかるものは右から入れる
    deque<P> q;
    q.emplace_back(si, sj);

    //0-1BFS
    while (!q.empty())
    {
        //取り出すのは前からのみ
        int i = q.front().first;
        int j = q.front().second;
        q.pop_front();
        int d = dist[i][j];
        rep(v, 4)
        {
            int ni = i + di[v];
            int nj = i + dj[v];
            if (ni < 0 || ni >= h || nj < 0 || nj >= w)
                continue;
            if (s[ni][nj] == '#')
                continue;
            //dist[ni][nj]は見探索ならINF or ワープしてチェックしたとき
            //移動先が現在地より小さいなら上書きする必要はない
            if (dist[ni][nj] <= d)
                continue;
            //徒歩移動の時はコストかからないので現在と同じコストを入れる
            dist[ni][nj] = d;
            q.emplace_front(ni, nj);
        }

        //ワープ範囲の探索 5*5
        for (int ei = -2; ei <= 2; ei++)
        {
            for (int ej = -2; ej <= 2; ej++)
            {
                int ni = i + ei, nj = j + ej;
                if (ni < 0 || ni >= h || nj < 0 || nj >= w)
                    continue;
                if (s[ni][nj] == '#')
                    continue;
                if (dist[ni][nj] <= d + 1)
                    continue;
                //ワープの時はコストがかかるので現在のコスト+1を入れる
                dist[ni][nj] = d + 1;
                q.emplace_back(ni, nj);
            }
        }
    }
    int ans = dist[ti][tj];
    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
