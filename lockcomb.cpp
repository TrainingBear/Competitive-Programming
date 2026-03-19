#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
using vi = vector<int>;
#define all(x) (x).begin(), (x).end()
void bismilah(){ ios::sync_with_stdio(false); cin.tie(nullptr); } void yes(){ cout << "YES\n"; } void no(){ cout << "NO\n"; }

void solve(){
    ll n; cin >> n;
    if (n%2==0) cout << -1 << '\n';
    else {
        vector arr(n, 0);
        ll ni = 0;
        for (ll i = 1; i <= n; i+=2) {
            arr[ni++] = i;
        }
        for (ll i = 2; i <= n; i+=2) {
            arr[ni++] = i;
        }
        for(ll i : arr) cout << i << " ";
        cout << '\n';
    }
}

int main() {
    bismilah();
    
    int t = 1;
    cin >> t; while (t--) { solve(); }

    return 0;
}

