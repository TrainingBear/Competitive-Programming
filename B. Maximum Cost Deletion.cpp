#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, a, b;
string s;

inline void solve() {
  cin >> n >> a >> b >> s;
  if (b >= 0) {
    cout << b * n + a * n << '\n';
    return;
  }
  char last = s[0];
  int cnt = 1;
  ll score = 0;
  int z = 1, o = 1;
  for (int i = 1; i < n; i++) {
    if (last != s[i]) {
      if (last == '1')
        o++;
      else
        z++;
      last = s[i];
    }
  }
  if (last == '1')
    o++;
  else
    z++;

  cout << (min(z, o) * b) + a * n << '\n';
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
