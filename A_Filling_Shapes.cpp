#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n&1) cout << 0 << '\n';
    else {
        unsigned long long ans = (1 << (n/2));
        cout << ans << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}