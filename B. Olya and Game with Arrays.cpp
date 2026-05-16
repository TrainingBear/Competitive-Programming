#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 25000, MAXM = 50000;
long n, m, a[MAXM], v[MAXN];

inline void solve() {
  cin >> n;
  ll ans = 0;
  long mn = LONG_MAX;
  for (int i = 0; i < n; i++) {
    cin >> m;
    for (int j = 0; j < m; j++) {
      cin >> a[j];
      mn = min(mn, a[j]);
    }
    sort(a, a + m);
    long d = a[m >= 2];
    ans += d;
    v[i] = d;
  }
  sort(v, v + n);
  ans += mn;
  ans -= v[0];
  cout << ans << '\n';
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
