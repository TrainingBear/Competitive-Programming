#include <bits/stdc++.h>
using namespace std;

int t, n;

inline void solve(){
    cin >> n;
    if(n < 3) cout << n;
    else cout << (n/3)%2;
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t; while(t--) solve();
}