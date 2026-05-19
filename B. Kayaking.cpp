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
  n *= 2;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<array<int, 3>> v;
  sort(a, a + n);

  int ans = 1e9;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {

      vector<int> b;
      for (int k = 0; k < n; k++) {
        if (k != i && k != j)
          b.push_back(a[k]);
      }

      int sum = 0;
      for (int k = 0; k < n - 2; k += 2)
        sum += b[k + 1] - b[k];
      ans = min(ans, sum);
    }
  }

  cout << ans << '\n';
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;

  // setIO("name");

  while (t--) {
    solve();
  }
  return 0;
}
