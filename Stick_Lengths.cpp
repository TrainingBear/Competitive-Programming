#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
long n, a[MAXN], pref[MAXN], suffix[MAXN];

inline void solve(){
    cin >> n;
    memset(pref, 0, sizeof(pref));
    memset(suffix, 0, sizeof(suffix));
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);
    for(int i = 1; i < n; i++){
        pref[i+1] = (i)*(a[i]-a[i-1]) + pref[i];
    }
    for(int i = n-2; i >= 0; i--){
        suffix[i+1] = suffix[i+2] + ((n-i-1)*(a[i+1]-a[i]));
    }

    long ans = LONG_MAX;
    for(int i = 1; i <= n; i++){
        ans = min(pref[i]+suffix[i], ans);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}