#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[502]; // 1이 파란 칸, 0이 빨간 칸에 대응
// 101111
// 101010
// 101011
// 111011
 //bool vis[502][502]; // 해당 칸을 방문했는지 여부를 저장
 int dist[502][502]; // 거리를 저장할 배열
 int n , m;  // n = 행의 수, m = 열의 수
 int dx[4] = {1, 0, -1, 0};
 int dy[4] = {0, 1, 0, -1}; // 상하좌우 네 방향을 의미
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int, int>> Q;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    for(int i = 0; i < n; i++) fill(dist[i],dist[i]+m,-1);

    Q.push({0,0});
    dist[0][0] = 0;
    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++) // 상하좌우 칸을 살펴봄
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue; // 범위 밖일 경우 넘어감
            if (dist[nx][ny] >= 0 || board[nx][ny] != '1')
                continue;    // 이미 방문한 칸이거나 파란 칸이 아닐 경우
            dist[nx][ny] = dist[cur.X][cur.Y]+1; // (nx, ny)를 방문했다고 명시
            Q.push({nx, ny});
        }
    }

    cout << dist[n-1][m-1]+1;  // 15

    return 0;
}