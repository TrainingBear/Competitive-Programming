#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

signed long long n, m;

void solve(){
    cin >> n >> m;
    vector<ll> f;
    int b = 1;
    for(ll i = 1; i < m; i = 1 << b, b++){
        if(i&m!=i) break;
    }
    int tr = 0;
    int recur = 1000;
    for(ll i = m; m > (0); i = (i-1) & m) {
        cout << i << " ";
        // if(i&m==i) f.push_back(i);
        tr++;
        if(tr >= recur){
            break;
        }
    }

    ll ans = -1;
    if(f.empty()){
        ans = (n/m) + n%m!=0;
    } else {
        for(int i = f.size()-1; i >= 0; i--){
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}