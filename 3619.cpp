bool bfs(const vector<vector<int>>& g, int startI, int startJ, vector<vector<bool>>& v, int k, int m, int n) {
    if (v[startI][startJ] || g[startI][startJ] == 0) {
        return false;
    }

    int dx[] = { -1, 1, 0, 0 };
    int dy[] = { 0, 0, -1, 1 };
    
    queue<pair<int, int>> q;
    q.push({startI, startJ});
    v[startI][startJ] = true;
    
    long long islandSum = 0; 

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        
        int currR = current.first;
        int currC = current.second;
        islandSum += g[currR][currC];
        for (int i = 0; i < 4; i++) {
            int x = currR + dx[i];
            int y = currC + dy[i];
            if (x >= 0 && x < m && y >= 0 && y < n) {
                if (!v[x][y] && g[x][y] > 0) {
                    v[x][y] = true;
                    q.push({x, y});
                }
            }
        }
    }
    
    return (islandSum % k == 0);
}

class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        if (grid.empty()) return 0;
        
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;
        vector<vector<bool>> vis(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (bfs(grid, i, j, vis, k, m, n)) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
