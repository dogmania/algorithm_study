#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
#include <cmath>
#include <tuple>

#define INF 1e9

using namespace std;

int n, m, start;

int getSmallestNode(vector<bool>& visited, vector<int>& d) {
    int min = INF;
    int index = -1;

    for (int i = 1; i < n + 1; i++) {
        if (d[i] < min && !visited[i]) {
            min = d[i];
            index = i;
        }
    }

    return index;
}

void dijkstra(vector<vector<pair<int, int>>>& graph, vector<bool>& visited, vector<int>& d) {
    d[start] = 0;
    visited[start] = true;

    for (int i = 0; i < graph[start].size(); i++) {
        d[graph[start][i].first] = graph[start][i].second;
    }

    for (int i = 0; i < n - 1; i++) {
        int nextNode = getSmallestNode(visited, d);
        visited[nextNode] = true;

        for (int j = 0; j < graph[nextNode].size(); j++) {
            int cost = d[nextNode] + graph[nextNode][j].second;

            if (cost < d[graph[nextNode][j].first]) {
                d[graph[nextNode][j].first] = cost;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    cin >> start;

    vector<vector<pair<int, int>>> graph(n + 1);
    vector<bool> visited(n + 1, false);
    vector<int> d(n + 1, INF);

    for (int i = 0; i < m; i++) {
        int from, to, cost;
        cin >> from >> to >> cost;

        graph[from].push_back({to, cost});
    }

    dijkstra(graph, visited, d);

    for (int i = 1; i < n + 1; i++) {
        if (d[i] == INF) cout << "Infinity" << '\n';
        else cout << d[i] << '\n';
    }
}