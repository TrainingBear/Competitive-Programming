#include <bits/stdc++.h>
using namespace std;

struct triple{ long l, r, rr; };

int const MAXN = 1e5+5;
long n, k;
triple a[MAXN];


inline void solve(){
    cin >> n >> k;
    for(int i = 0 ; i < n; i++){
        cin >> a[i].l >> a[i].r >> a[i].rr;
    }
    sort(a, a+n, [](auto&a, auto&b){
        return a.l < b.l;
    });

    for(int i = 0 ; i< n; i++){
        triple p = a[i];
        if(k > p.rr) continue;
        if(p.l > k || p.r < k) break;
        else k = p.rr;
    }
    cout << k << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t= 1;
    cin >> t;
    while(t--) solve();
}
