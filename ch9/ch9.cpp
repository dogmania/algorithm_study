#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
#include <cmath>
#include <tuple>
#include <queue>

#define INF 1e9

using namespace std;

int n, m, start;

void dijkstra(vector<vector<pair<int, int>>>& graph, vector<int>& d) {
    priority_queue<pair<int, int>> pq;
    
    d[start] = 0;
    pq.push({0, start});

    while(!pq.empty()) {
        int distance = -pq.top().first;
        int nextNode = pq.top().second;
        pq.pop();

        if (d[nextNode] < distance) continue;

        for (int i = 0; i < graph[nextNode].size(); i++) {
            int cost = d[nextNode] + graph[nextNode][i].second;

            if (cost < d[graph[nextNode][i].first]) {
                d[graph[nextNode][i].first] = cost;
                pq.push({-cost, graph[nextNode][i].first});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    cin >> start;

    vector<vector<pair<int, int>>> graph(n + 1);
    vector<int> d(n + 1, INF);

    for (int i = 0; i < m; i++) {
        int from, to, cost;
        cin >> from >> to >> cost;

        graph[from].push_back({to, cost});
    }

    dijkstra(graph, d);

    for (int i = 1; i < n + 1; i++) {
        if (d[i] == INF) cout << "Infinity" << '\n';
        else cout << d[i] << '\n';
    }
}