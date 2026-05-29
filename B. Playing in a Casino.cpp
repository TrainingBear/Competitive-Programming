#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline void solve() {
  int n, m;
  cin >> n >> m;
  int in[m][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> in[j][i];
    }
  }
  ll pot = 0;
  for (int j = 0; j < m; j++) {
    sort(in[j], in[j] + n);
    for (int i = 0; i < n; i++) {
      pot += 1ll * (i - (n - i - 1)) * in[j][i];
    }
  }

  cout << pot << '\n';
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
