#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
using ii = pair <ll, ll>;
using vii = vector <ii>;

void tc () {
    ll n, k;
    cin >> n >> k;
    vll ve(n);
    for (ll &i : ve) cin >> i;
    vll th(k+1, 0);
    for (ll i : ve) {
        if (i >= k) continue;
        th[i]++;
    }
    ll ans = 0;
    for (ll i = 1; i < k; i++) {
        if (i == k-i) {
            ans += th[i]/2;
            continue;
        }
        ll minN = min(th[i], th[k-i]);
        th[i] -= minN;
        th[k-i] -= minN;
        ans += minN;
    }
    cout << ans << '\n';
}

int main () {
    cin.tie(nullptr) -> sync_with_stdio(false);
    ll T; cin >> T; while (T--) { tc(); }
    return 0;
}
