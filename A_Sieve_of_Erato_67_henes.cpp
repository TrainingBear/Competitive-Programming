#include <bits/stdc++.h>
using namespace std;

int t, n, a[10];

void solve(){
    cin >> n;
    bool one = 0, sev = 0;
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        if(a[i]==1) one = 1;
        if(a[i]==67) sev = 1;
    }
    if (one && sev) {
        cout << "YES\n";
    } else cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t; while(t--) solve();
}