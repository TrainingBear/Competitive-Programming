#include <bits/stdc++.h>
using namespace std;

int const MAXN = 2e5+5;
int n, a[MAXN];

void solve(){
    cin >>n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ptr = 0, i = 0;
    long ans = LONG_MIN;
    while(i < n){
        while(ptr+1 < n && (a[ptr]&1)!=(a[ptr+1]&1))
            ptr++;
        long pref = 0;
        long min_pref = 0;
        for(; i <= ptr; i++){
            pref+=a[i];
            ans = max(pref-min_pref, ans);
            min_pref = min(pref, min_pref);
        }
        ptr++;
        i=ptr;
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