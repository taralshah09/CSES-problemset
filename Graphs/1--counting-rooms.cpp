#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int n, m;
vector<string> grid;
vector<vector<bool>> vis;

void bfs(int i, int j) {
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = true;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();

        for (int d = 0; d < 4; d++) {
            int newr = r + dr[d];
            int newc = c + dc[d];
            if (newr >= 0 && newr < n && newc >= 0 && newc < m 
                && !vis[newr][newc] && grid[newr][newc] == '.') {
                vis[newr][newc] = true;
                q.push({newr, newc});
            }
        }
    }
}

int main() {
    fastio;

    cin >> n >> m;
    grid.resize(n);
    vis.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && grid[i][j] == '.') {
                bfs(i, j);
                count++;
            }
        }
    }

    cout << count << "\n";
    return 0;
}
