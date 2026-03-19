#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using v = vector<long long>;
using p = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
bool bismilah(){ ios::sync_with_stdio(false); cin.tie(nullptr); return 354;} 

void solve(){
    ll n, k; cin >> n >> k;
    bool flag =false;
    bool fail = false;
    for (ll i = 0; i < n; i++) {
        int door; cin >> door;
        if(door==1) flag=true;
        if(flag) k--;
        if(k < 0 && door == 1) {
            fail = true;
        }
    }
    if(!fail)cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    bool answer = bismilah();
    
    int t = 1;
    cin >> t; while (t--) { solve(); }

    return 0;
}

