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

    vector<int> adj[n+1];

    for(int i = 0; i<e; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start1 = 1;

    vector<bool> vis(n+1, false);
    queue<int> q;

     cout << "BFS : ";

    vis[start1] = true;
    q.push(start1);

    while(q.size() > 0){
        int node = q.front();
        q.pop();

        cout << node << " ";

        for(int n : adj[node]){
            if(!vis[n]){
                vis[n] = true;
                q.push(n);
            }
        }
    }

    vector<bool> vis2(n+1, false);
    int start2 = 1;
    cout << endl << "DFS : ";
    dfs(start2, adj, vis2);

    cout << endl;

    return 0;
}