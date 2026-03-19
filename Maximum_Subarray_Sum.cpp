#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN

const int MAXN = 2e5+5;
long n, a[MAXN];

inline void solve(){
    cin >> n;
    for(int i = 0; i < n; i++) {
        long x; cin >> x;
        a[i] = x;
    }

    ll ans = llmn;
    ll min_pref = 0;
    ll pref = 0;
    for(int i = 0; i < n; i++){
        pref+=a[i];
        ans = max(ans, pref-min_pref);
        min_pref = min(min_pref, pref);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}