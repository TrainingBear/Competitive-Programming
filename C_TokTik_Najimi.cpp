#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n, pref = 0;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    long long ans = 0;
    for(int i = 0 ; i < n; i++){
        if(a[i] > pref){
            ans = max(ans, a[i]+1-pref);
        }
        pref+=a[i];
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) solve();
}