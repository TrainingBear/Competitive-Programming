#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, previous[100005];
vector<int> adj[100005];
int visited[100005];

void dfs(int now){ 
    if(visited[now]==2) {
        vector<int> ans;
        ans.push_back(now);
        int x = previous[now];
        while(x!=now){
            ans.push_back(x);
            x = previous[x];
        }
        ans.push_back(now);
        cout << ans.size() << '\n';
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        exit(0);
    }
    visited[now] += 1;
    for(int next : adj[now]){ 
        dfs(next); 
        previous[next] = now;
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i);
        }
    }
    cout << "IMPOSSIBLE";
}
