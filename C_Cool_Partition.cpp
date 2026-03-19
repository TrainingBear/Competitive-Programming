#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5;
int t, n, a[MAXN], cnt[MAXN];

inline void solve(){
    cin >> n;
    memset(cnt, 0, sizeof(cnt));
    set<int> cur, seen;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cur.insert(a[i]);
        seen.insert(a[i]);
        if(cur.size()==seen.size()){
            ans++;
            seen.clear();
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t; while(t--) solve();
}