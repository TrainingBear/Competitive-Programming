#include <algorithm>
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
  map<string, int> cnt;
  string s;
  int ammount;
  int mn = 1e9;
  for (int i = 0; i < n; i++) {
    cin >> s >> ammount;
    cnt[s] += ammount;
    if (n == 1) {
      cout << s << '\n';
      return;
    }
  }

  map<int, string> rev;
  for (auto &a : cnt) {
    mn = min(mn, a.second);
    rev[a.second] = a.first;
  }

  auto it = rev.upper_bound(mn);
  if (it != rev.end())
    cout << it->second << '\n';
  else
    cout << "Tie" << '\n';
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;

  setIO("notlast");

  while (t--) {
    solve();
  }
  return 0;
}
