#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, e;
    cin >> n >> e;

    vector<int> adj[n + 1];

    for(int i = 0; i<e; i++){
        int u,v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> vis(n + 1, false);
    queue<int> q;

    int start = 1;

    q.push(start);
    vis[start] = true;

    while(q.size() > 0){
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neigh : adj[node])
        {
            if(!vis[neigh]){
                vis[neigh] = true;
                q.push(neigh);
            }
        }
        
    }

    return 0;
}