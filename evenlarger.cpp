#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int n, t, X[200005];
ll even[200005], odd[200005];

void solve(){
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(i%2){
            odd[i+2] = odd[i] + x;
        } else {
            even[i+2] = even[i] + x;
        }
    }
    cout << odd[n] - odd[0] << " = odd \n";
    cout << even[n+1] - even[0] << " = even\n";
    if(true) return;
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= n-(i+2); j++){
            ll o = odd[j+i+3]-odd[j];
            ll e = even[j+i+3]-even[j];
            if(e< o) ans++;
        }
    }
    //cout << ans << '\n';
}
int main(){
    cin >> t;
    while (t--) solve();
}
