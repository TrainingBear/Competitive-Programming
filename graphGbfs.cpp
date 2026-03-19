#include <bits/stdc++.h>
using namespace std;
long long n, m, a, b;

int main(){
    cin >> n >> m;
    vector<vector<int>> arr(n+1);
    bool visited[n];
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    visited[1] = 1;
    long long prev[n+12];
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i : arr[cur]){
            if(i==n){
                vector<int> ans;
                ans.push_back(i);
                int x = prev[i];
                while(x!=1){
                    ans.push_back(x);
                    x = prev[x];
                }
                ans.push_back(x);
                cout << ans.size() << '\n';
                for(int j = (int) (ans.size()-1); j >=0; j--){
                    cout << ans[j] << " ";
                }
                return 0;
            } 
            if(!visited[i]){ 
                prev[i] = cur;
                q.push(i); 
                visited[i] = 1; 
            }
        }
    }
}
