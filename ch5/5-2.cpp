// #include <iostream>
// #include <string>
// #include <vector>
// #include <deque>
// #include <algorithm>
// #include <cmath>
// #include <sstream>
// #include <map>

// using namespace std;

// int n, m;
// vector<vector<int>> graph(201, vector<int>(201, 0)); 

// int dx[] = {-1, 1, 0, 0};
// int dy[] = {0, 0, -1, 1};

// int bfs(int x, int y) {
//     deque<pair<int, int>> dq;

//     dq.push_back({x, y});
    
//     while (!dq.empty()) {
//         int x = dq.front().first;
//         int y = dq.front().second;
//         dq.pop_front();

//         for (int i = 0; i < 4; i++) {
//             int nx = x + dx[i];
//             int ny = y + dy[i];

//             if (nx < 0 || nx > n - 1 || ny < 0 || ny > m - 1) continue;

//             if (graph[nx][ny] == 0) continue;
            
//             if (graph[nx][ny] == 1) {
//                 graph[nx][ny] = graph[x][y] + 1;
//                 dq.push_back({nx, ny});
//             }
//         }
//     }

//     return graph[n - 1][m - 1];
// }

// int main() {
//     cin >> n >> m;

//     for (int i = 0; i < n; i++) {
//         string s;
//         cin >> s;

//         for (int j = 0; j < m; j++) {
//             graph[i][j] = s[j] - '0';
//         }
//     }

//     cout << bfs(0, 0) << '\n';
// }