#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline void solve() {
  int n;
  cin >> n;
  ll a[n];

  ll sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  sort(a, a + n);
  ll ans = INT_MAX;
  for (ll mask = 0; mask < (1 << n); mask++) {
    ll d = 0;
    for (int i = 0; i < n; i++) {
      if (mask & (1 << i))
        d += a[i];
    }
    ans = min(ans, abs(sum - d - d));
  }
  cout << ans << '\n';
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
