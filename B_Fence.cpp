#include <bits/stdc++.h>
using namespace std;
int n, k;
int pref[150005];
void solve(){
    memset(pref, 0, sizeof(pref));
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++){
        int x; cin >> x;
        pref[i+1] = pref[i]+x;
    }
    int ans = 0;
    for(int i = k; i <= n; i++){
        if(pref[ans+k]-pref[ans] >= pref[i]-pref[i-k]){
            ans = i-k;
        }
    }
    cout << ans+1 << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}