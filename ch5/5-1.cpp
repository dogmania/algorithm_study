// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
// #include <cmath>
// #include <sstream>
// #include <queue>
// #include <stack>
// #include <deque>

// using namespace std;

// void dfs(bool visited[], vector<int> graph[], int x) {
//     visited[x] = true;

//     for (int i = 0; i < graph[x].size(); i++) {
//         if (!visited[graph[x][i]]) dfs(visited, graph, graph[x][i]);
//     }
// }

// void bfs(bool visited[], vector<int> graph[], int x) {
//     deque<int> dq;

//     visited[x] = true;
//     dq.push_front(x);

//     while (!dq.empty()) {
//         int y = dq.front();
//         dq.pop_front();

//         for (int i = 0; i < graph[y].size(); i++) {
//             if (!visited[graph[y][i]]) {
//                 dq.push_back(graph[y][i]);
//                 visited[graph[y][i]] = true;
//             }
//         }
//     }
// }

// int main() {
//     bool visited[9];
//     vector<int> graph[9] = {
//         {0},
//         {2, 3, 8},
//         {1, 7},
//         {1, 4, 5},
//         {3, 5},
//         {3, 4},
//         {7},
//         {2, 6, 8},
//         {1, 7}
//     };

//     memset(visited, false, sizeof(visited));
//     dfs(visited, graph, 1);
    
//     memset(visited, false, sizeof(visited));
//     bfs(visited, graph, 1);
// }

// bool dfs(vector<int> graph[], int x, int y, int n, int m) {
//     if (x < 0 || x > n - 1 || y < 0 || y > m - 1) return false;

//     if (graph[x][y] == 0) {
//         graph[x][y] = 1;

//         dfs(graph, x, y - 1, n, m);
//         dfs(graph, x - 1, y, n, m);
//         dfs(graph, x, y + 1, n, m);
//         dfs(graph, x + 1, y, n, m);

//         return true;
//     } else return false;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> graph[n];
//     int answer = 0;

//     for (int i = 0; i < n; i++) {
//         string s;
//         cin >> s;
//         for (int j = 0; j < m; j++) {
//             graph[i].push_back(s[j] - '0');
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (dfs(graph, i, j, n, m)) answer++;
//         }
//     }

//     cout << answer << '\n';
// }