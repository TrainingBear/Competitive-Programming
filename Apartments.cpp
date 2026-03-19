#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;

long n, m, k, a[MAXN], b[MAXN];

inline void solve(){
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a, a+n);
    sort(b, b+m);

    long ans = 0;
    int l = 0, r = 0;
    while(l < n && r < m){
        if(abs(a[l]-b[r]) <= k){
            l++;
            r++;
            ans++;
        }
        else if(b[r] < a[l]) r++;
        else l++;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}