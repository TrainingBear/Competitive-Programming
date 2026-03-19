#include <bits/stdc++.h>
using namespace std;

int n, m;
string grid[1005];
int cnt;
void dfs(int x, int y){
    if(x < 0 || x > n || y<0 || y > m)
        return;
    if(grid[x][y]=='.'){ 
        grid[x][y] = '#';
    dfs(x, y-1);
    dfs(x, y+1);
    dfs(x+1, y);
    dfs(x-1, y);

    }
    }
int main(){
    cin >> n >> m;
    cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j]=='.') {
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout << cnt;
}
