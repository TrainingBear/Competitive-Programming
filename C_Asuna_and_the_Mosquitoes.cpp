#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5;
long long n, a[MAXN];

void solve(){
    cin >> n;
    long long ans = 0, cnt = 0, mx = 0;
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        mx = max(a[i], mx);
        ans+=a[i];
        if(a[i]&1) cnt++;
    }
    if(!cnt || cnt == n) cout << mx << '\n';
    else cout << ans - cnt +1 << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}