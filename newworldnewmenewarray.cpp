#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k, p; cin >> n >> k >> p;
    if(n*p >= k && n*(-p) <=k) {
        cout << (k%p!=0?abs(k/p)+1:abs(k/p)) << '\n';
    }
    else cout << -1 << '\n';
}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t; while(t--) solve();
}
