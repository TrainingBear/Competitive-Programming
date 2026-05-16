#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5 + 5;
int n, a[MAXN];

inline void solve() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);
  ll cnt = 0;
  int m = 1;
  for (int i = 0; i < n; i++) {
    if (a[i] >= m) {
      cnt += a[i] - m;
      m++;
    }
  }
  cout << cnt << '\n';
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
