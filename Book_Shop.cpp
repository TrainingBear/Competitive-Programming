#include <bits/stdc++.h>
using namespace std;
#define ll long long

const long MOD = 1e9 + 7, MAXN = 1e5 + 5;

inline void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> c(n), p(n), dp(x + 1), price(x + 1);

    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < n; i++) cin >> p[i];

    dp[0] = 1;
    for (int j = 0; j < n; j++) {
        for (int i = 1; i <= x; i++) {
            if (i - c[j] >= 0) {
				if(i-c[j]==0) price[i] += p[j];
                else price[i] += p[i-c[j]];
            }
        }
    }

    cout << price[n];
}
int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}