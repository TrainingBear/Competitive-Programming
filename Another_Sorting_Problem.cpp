#include <bits/stdc++.h>
using namespace std;
#define ll long long
void setIO(string name = "") {
    cin.tie(0)->sync_with_stdio(0);  // see /general/fast-io
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);  // see /general/input-output
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

const int MAXN = 2e5 + 5;
ll n, a[MAXN];

inline void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    ll mx = 0, mn = 2e9;
    vector<ll> l, r;
    for (int i = 1; i< n; i++) {
        mx = max(mx, a[i-1]-a[i]);
    }
    int cnt = 0;
    for(int i = 1; i < n; i++){
        if (a[i - 1] <= a[i]) continue;
        a[i]+=mx;
    }

    if (is_sorted(a, a+n)) {
        cout << "YES\n";
    } else
        cout << "NO\n";
}

int main() {
    setIO();
    int t = 1;

    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
