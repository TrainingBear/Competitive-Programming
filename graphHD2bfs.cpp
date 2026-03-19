#include <bits/stdc++.h>
#include <functional>
using namespace std;

int n, m;
string grid[1005];
bool visited[1005][1005];
int dir[4][2] = {{1, 0},{0, 1},{-1, 0},{0, -1}}; 
char pre[1005][1005];

struct Point{
    int x;
    int y;
    bool eq(Point &b){
        return (x==b.x) && (y==b.y);
    }
    bool operator==(const Point &b) const { return (x==b.x) && (y==b.y); }
    bool operator!=(const Point &b) const { return (x!=b.x) || (y!=b.y); }
};

/* required to hash a container */
template<> struct std::hash<Point> {
    std::size_t operator()(const Point& c) const {
        return std::hash<int>()(c.x) ^ std::hash<int>()(c.y);  
    }
};

bool valid(Point p){
    int i = p.x;
    int j = p.y;
    return ((i < n && j < m) && (i > 0 && j > 0));
}

void bfs(Point start){ 
    unordered_map<Point, Point> map;
    queue<Point> q;
    q.push(start);
    while(!q.empty()){
        Point cur = q.front();
        q.pop();
        if(grid[cur.x][cur.y]=='B'){
            stack<Point> ans;
            ans.push(cur);
            Point step = map[cur];
            while(step.eq(start)){
                ans.push(step);
                step = map[step];
            }
            cout << "YES\n";
            cout << ans.size() << '\n';
            // for(int p = ans.size()-1; p >=0; p--){ }
            while(!ans.empty()){
                Point next = ans.front();
                ans.pop;
                int x1 = next.x, y1 = next.y;
                int x2 = start.x, y2 = start.y;

                int xx = x1-x2, yy = y1-y2;
                if(xx==-1) cout << "L";
                if(xx==1) cout << "R";
                if(yy==-1) cout << "U";
                if(yy==1) cout << "D"
            }
        };
        for(int d[] : dir){ 
            Point ne = cur;
            ne.x += d[0];
            ne.y += d[1];
            if(valid(ne)
               && !visited[ne.x][ne.y]
               && grid[ne.x][ne.y] == '.'){
                q.push(ne);
                visited[ne.x][ne.y] = 1;
                map[ne] = cur;
            }
        }
    }
    cout << "NO";
}

int main(){
    cin >> n >> m;
    int ax = -1, ay = -1, bx = -1, by = -1;
    for(int i = 0; i < n; i ++){
        cin >> grid[i];
        for(int j = 0; j < m; j++){
            if(ax==-1 && ay == -1 && bx == -1 && by == -1) break;
            if(grid[i][j]=='A'){
                ax = i;
                ay = j;
            }
            if(grid[i][j]=='B'){
                bx = i;
                by = i;
            }
        }
    }
    bfs({ax, ay},{bx,by});
}
