#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<int> adj[], vector<bool> &vis){
    cout << u << " ";
    vis[u] = true;

    for(int n : adj[u]){
        if(!vis[n]){
            dfs(n, adj, vis);
        }
    }
}

int main() {

    int n, e;
    cin >> n >> e;

    vector<int> adj[n + 1];

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start = 1;

    vector<bool> vis(n+1, false);
    
    dfs(start, adj, vis);

    

    return 0;
}