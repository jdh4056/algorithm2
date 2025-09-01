#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    vector<vector<int>> adj(n+1);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    vector<bool> vis(n+1, false);
    int comp = 0;

    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        comp++;
        queue<int> q;
        vis[i] = true;
        q.push(i);

        while (!q.empty()) {
            int cur = q.front(); q.pop();
            for (int nxt : adj[cur]) {
                if (vis[nxt]) continue;
                vis[nxt] = true;
                q.push(nxt);
            }
        }
    }

    cout << comp;
}