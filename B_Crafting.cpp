#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5 + 5;
long n;
// , a[MAXN], b[MAXN];
pair<long, long> a[MAXN];

inline void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i].first;
    for (int i = 0; i < n; i++) cin >> a[i].second;

    sort(a, a + n, [](auto& a, auto& b) {
        return a.second - a.first > b.second - b.first;
    });

    vector<long> m;
    for (int i = 0; i < n; i++) {
        m.push_back(a[i].first - a[i].second);
    }

    int ptr = 0;
    for (int i = 0; i < n; i) {
        if (m[i] >= 0) {
            i++;
            continue;
        }
        while (ptr < n && m[ptr] <= 0) ptr++;
        if (ptr < n) {
            long d = min(abs(m[i]), m[ptr]);
            m[i] += d;
            m[ptr] -= d;
            if(m[i]>=0) i++;
        } else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
