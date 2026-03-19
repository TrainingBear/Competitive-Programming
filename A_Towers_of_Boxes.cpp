#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, d;
    cin >> n >> m >> d;
    int stack = (d/m)+1;
    int ans = n <= stack? 1 : ((n/stack) + (n%stack!=0));
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}