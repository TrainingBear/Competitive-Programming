#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
int n, m, a[MAXN], b[MAXN];

bool check(int x){
    if(x <= 0 || x >= n) return false;
    return b[x] > b[x+1];
}

inline void solve(){
    cin >> n >> m;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for(int i = 1; i <= n ; i++) {
        cin >> a[i];
        b[a[i]] = i;
    }

    int ans = 1;
    for(int i = 1; i < n; i++) {
        if(b[i] > b[i+1]) ans++;
    }

    while(m--){
        int l, r; 
        cin >> l >> r;
        int x = a[l], y = a[r];
        unordered_set<int> u = {x-1, x, y, y-1};

        for(auto&a:u) ans-=check(a);

        swap(a[l], a[r]);
        swap(b[x], b[y]);

        for(auto&a:u) ans+=check(a);

        cout << ans << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}