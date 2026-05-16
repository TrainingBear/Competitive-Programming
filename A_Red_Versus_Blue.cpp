#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, r, b;

inline void solve() {
    cin >> n >> r >> b;
    int k = r / (b + 1), m = r % (b+1);
    for (int i = 1; i <= b+1; i++) {
        for (int j = 1; j <= k + (i<=m); j++) {
            cout << "R";
        }
        if(i<=b) cout << "B";
    }
    cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int t = 1;

    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
