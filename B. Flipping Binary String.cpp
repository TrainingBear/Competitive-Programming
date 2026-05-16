#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
string s;

inline void solve() {
  cin >> n >> s;
  int cnt = 0;
  for (int i = 0; i < n; i++)
    cnt += s[i] == '1';

  if (cnt == 0)
    cout << 0;
  else if ((cnt % 2 == 0)) {
    cout << cnt << '\n';
    for (int i = 0; i < n; i++) {
      if (s[i] == '1')
        cout << i + 1 << " ";
    }
  } else if (n - cnt == 1) {
    cout << 1 << '\n';
    for (int i = 0; i < n; i++) {
      if (s[i] == '0')
        cout << i + 1;
    }
  } else if ((n - cnt) % 2 == 0) {
    cout << n << '\n';
    for (int i = 1; i <= n; i++)
      cout << i << " ";
  } else
    cout << -1;
  cout << '\n';
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
