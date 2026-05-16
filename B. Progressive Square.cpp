#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 500;
long n, c, d, a[MAXN * MAXN + 5];

inline void solve() {
  cin >> n >> c >> d;
  unordered_map<long, int> cnt;
  long next = LONG_MAX;
  for (int i = 1; i <= n * n; i++) {
    cin >> a[i];
    cnt[a[i]]++;
    next = min(next, a[i]);
  }
  long prev = next;
  for (int i = 1; i <= n * n; i++) {
    if (cnt[next] == 0) {
      cout << "NO\n";
      return;
    }
    cnt[next]--;

    if (i % n) {
      next += c;
    } else {
      prev += d;
      next = prev;
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
