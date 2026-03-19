#include <bits/stdc++.h>
using namespace std;

int t, n, l[105], cnt[105];

inline void solve(){
    cin >> n;int ans = 0;
    memset(cnt, 0, sizeof(cnt));
    for(int i = 0; i < n; i++) {
        cin >> l[i];
        for(int j = 0; j < l[i]; j++) cnt[j]++;
    }
    sort(cnt, cnt+n, greater<int>());
    sort(l, l+n, greater<int>());
    for(int i = 0; i < n; i++) {
        if(cnt[i]==l[0] && l[0]!=0) ans++;
    }

    if(ans==n) cout << -1;
    else cout << ans;
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t; while(t--) solve();
}