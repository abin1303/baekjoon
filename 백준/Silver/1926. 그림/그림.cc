#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[502][502]; // 1이 파란 칸, 0이 빨간 칸에 대응
// 1 1 0 1 1
// 0 1 1 0 0
// 0 0 0 0 0
// 1 0 1 1 1
// 0 0 1 1 1
// 0 0 1 1 1  
 bool vis[502][502]; // 해당 칸을 방문했는지 여부를 저장
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
        for (int j = 0; j < m; j++)
            cin >> board[i][j];

    int num = 0;    // 그림의 수
    int mx = 0;     // 그림의 최댓값
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(board[i][j] == 0 || vis[i][j])   continue;   // 시작점인지 확인?
            num++;
            vis[i][j] = 1;  // 방문했다고 명시
            Q.push({i,j});  // 큐에 시작점인 (i, j)을 삽입
            int area = 0;
            while(!Q.empty())
            {
                area++;
                pair<int, int> cur = Q.front();
                Q.pop();
                for(int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >=m) continue;
                    if(vis[nx][ny] || board[nx][ny] != 1)   continue;
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            mx = max(mx, area); // area가 mx보다 클 경우 mx에 area를 대입.
        }
    }
    cout << num << '\n' << mx;  // 4, 9

    return 0;
}