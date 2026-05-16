#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;
set<string> res;
void recur2(string r, set<int> v) {
  if (v.empty()) {
    res.insert(r);
    return;
  }
  for (int i : v) {
    set<int> copy = v;
    copy.erase(i);
    recur2(r + s[i], copy);
  }
}

inline void solve() {
  cin >> s;
  int n = s.size();

  int total = 1;
  set<int> a;
  for (int i = 0; i < n; i++) {
    total *= (i + 1);
    a.insert(i);
  }
  recur2("", a);

  cout << res.size() << '\n';
  for (auto a : res)
    cout << a << '\n';
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;
  while (t--) {
    solve();
  }
  return 0;
}
