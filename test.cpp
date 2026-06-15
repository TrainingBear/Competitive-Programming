#include <bits/stdc++.h>
using namespace std;
#define ll long long
void setIO(string name = "") {
  cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
  if (name.size()) {
    freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
    freopen((name + ".out").c_str(), "w", stdout);
  }
}

inline void solve(){
  vector<int> a = {1, 1, 1, 3, 4 ,3 ,2 ,3 ,4 ,6, 5, 4, 5, 6, 3, 2, 1};
  sort(a.begin(), a.end());
  for(auto x : a) cout << x << " ";
  cout << '\n';
  auto it = unique(a.begin(), a.end());
  for(auto x : a) cout << x << " ";
  cout << '\n';
}
int main() {
  setIO(); int t = 1;

  cin >> t;

  while (t--) solve();
  return 0;
}

