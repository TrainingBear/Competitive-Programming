#include <bits/stdc++.h>
using namespace std;

int n, r, j, y, h[100005];
pair<int, char> d[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n >> r >> j >> y;
    int idx = -1;
    for(int i = 0; i < n; i++){
        int x; cin >> x; 
        char g; cin >> g;
        d[i] = {x, g};
        if(g == 'Y') idx = i;
    }
    sort(d, d+n, [](auto&a, auto&b){
        return 
    });
    for(int i = 0; i < j; i++){
        cin >> h[i];
    }

    for(int i = 0; i < j; i++){
        int mx = h[i];
        int ans = 0;
        for(int j = 0; j < r; j++){

        }
        cout << ans << '\n';
    }
}