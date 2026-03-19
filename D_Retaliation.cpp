#include <bits/stdc++.h>
using namespace std;

int t, n;
const int MAXN = 2e5+5;
long a[MAXN];

inline void solve(){
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    long a = a[0]%n;
    long b = a[1];
    for(int i = 2; i <=n; i++){
    }
    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t; while(t--) solve();
}