#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long n, m, a, b;

void solve(){
    cin >> n >> m >> a >> b;
    ll ans = 0;
    while(n*m>1){
        ll x = a > ((n/2) + (n&1)) ? a-1 : n-a;
        ll y = b > ((m/2) + (m&1)) ? b-1 : m-b;
        // cout << x << " < " << y << ": ";
        if(y>=x){
            m = b > ((m/2) + (m&1)) ? m-(b-1) : b;
            // cout << m << " ";
        } else {
            n = a > ((n/2) + (n&1)) ? n-(a-1) : a;
            // cout << n << " ";
        }
        a = (n/2) + (n&1);
        b = (m/2) + (m&1);
        ans++;
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