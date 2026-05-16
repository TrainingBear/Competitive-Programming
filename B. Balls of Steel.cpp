#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 105;
int n, k;
pair<int, int> a[MAXN];

inline int dis(int from, int to) {
  return abs(a[from].first - a[to].first) + abs(a[from].second - a[to].second);
}

inline void solve() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }

  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (dis(i, j) > k)
        cnt++;
    }
    if (cnt == 0) {
      cout << -1 << '\n';
      return;
    }
    if (cnt == n) {
      cout << 1 << '\n';
      return;
    }
  }
  cout << -1 << '\n';
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
