#include <bits/stdc++.h>
using namespace std;

int const MAXN = 2e5+5;
long n, a[MAXN];

inline void solve(){
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long ans = 0;
    int i = 0;
    while(i < n){
        long mxl = LONG_MIN;
        long mxr = LONG_MIN;
        while(a[i] < 0 && i < n) mxl = max(mxl, a[i++]);        
        while(a[i] > 0 && i < n) mxr = max(mxr, a[i++]);
        if (mxl != LONG_MIN) ans+=(mxl);
        if (mxr != LONG_MIN) ans+=(mxr);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}