#include <bits/stdc++.h>
using namespace std;
#define ll long long
void setIO(string name) {
  freopen((name + ".in").c_str(), "r", stdin);
  freopen((name + ".out").c_str(), "w", stdout);
}

inline void solve() {
  int n, m;
  cin >> n >> m;
  string a[2 * n];

  for (int i = 0; i < 2 * n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < m; i++) {
    set<char> plain;
    for (int j = n; j < 2 * n; j++)
      plain.insert(a[j][i]);

    bool flag = 1;
    for (int j = 0; j < n; j++) {
      if (plain.count(a[j][i])) {
        flag = 0;
        break;
      }
    }
    if (flag)
  }
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;
  // setIO("cownomics");
  while (t--) {
    solve();
  }
  return 0;
}
