#include <bits/stdc++.h>
using namespace std;
#define ll long long
long x, y;
inline void solve(){
    cin >> x >> y;
    ll ans = -1;
    if(x > y){
        if(x&1){
            ll d = x-1;
            ans = (d*d)+y;
        } else {
            ans = (x*x) - y + 1LL;
        }
    } else {
        if(y&1){
            ans = (y*y) - x + 1LL;
        } else {
            ll d = y-1;
            ans = (d*d) + x;
        }
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