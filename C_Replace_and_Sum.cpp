#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5;
int n, q, a[MAXN], b[MAXN];

void solve(){
    cin >> n >> q;
    for(int i = 0 ; i < n;i ++) cin >> a[i];
    for(int i = 0 ; i < n;i ++) {
        int x; cin >> x;
        a[i] = max(a[i], x);
    }
    
    for(int i = n-1; i > 0; i--){
        a[i-1] = max(a[i], a[i-1]);
    }
    memset(b, 0, sizeof(b));

    for(int i = 0; i < n; i++) b[i+1] = b[i] + a[i];

    for(int i = 0 ; i < q; i++){
        int l, r; cin >> l >> r;
        cout << b[r] - b[l-1] << " ";
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t; while(t--) solve();
}