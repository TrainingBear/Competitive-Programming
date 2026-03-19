#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline void solve() {
    int n;
    cin >> n;
    int ans = 0;
    while(n){
        int mx = 0;
        int d = n;
        while(d){
            mx = max(mx, d%10);
            d/=10;
        }
        n-=mx;
        ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t--) solve();
}