#include <bits/stdc++.h>
using namespace std;

int n;


void dfs(int u, vector<int> adj[], vector<bool> &vis){
    cout << u << " ";
    vis[u] = true;

    for(int neigh : adj[u]){
        if(!vis[neigh]){
            dfs(neigh, adj, vis);
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

    vector<bool> vis(n + 1, false);

    int start = 1;

    dfs(start, adj, vis);



    

    return 0;
}