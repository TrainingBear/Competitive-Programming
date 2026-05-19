#include <bits/stdc++.h>
using namespace std;
#define ll long long

void setIO(string name) {
  freopen((name + ".in").c_str(), "r", stdin);
  freopen((name + ".out").c_str(), "w", stdout);
}
inline void solve() {
  int n;
  cin >> n;

  pair<int, int> a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }

  sort(a, a + n);

  int time = 0;
  for (int i = 0; i < n; i++) {
    time = max(time, a[i].first);
    time += a[i].second;
  }
  cout << time << '\n';
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;

  setIO("cowqueue");

  while (t--) {
    solve();
  }
  return 0;
}
