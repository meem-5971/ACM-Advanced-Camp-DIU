#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 1e5 + 5;
const int INF = 1e9;
vector<pair<int, int>> adj[N]; // pair: (neighbor, weight)
vector<int> dist(N, INF);      // Distance array

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    dist[start] = 0;
    pq.push({0, start}); // {distance, node}

    while (!pq.empty()) {
        auto [curr_dist, u] = pq.top();
        pq.pop();

        if (curr_dist > dist[u]) continue; // Skip outdated entry

        for (auto [v, weight] : adj[u]) {
            if (dist[v] > curr_dist + weight) {
                dist[v] = curr_dist + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int n; // n = nodes, m = edges
    cin >> n;
    
    for (int i = 0; i <n-1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
        // If undirected: adj[v].push_back({u, w});
    }
    int q,k;
    cin>>q>>k;
    dijkstra(k); // Start from node 1

    // Optional: print distances
    //for (int i = 1; i <= n; i++) {
       // cout << "Distance to " << i << ": " << dist[i] << "\n";
   // }
    while(q--){
        int u,v;
        cin>>u>>v;
        cout<<dist[u]+dist[v]<<endl;
    }
    
    return 0;
}
