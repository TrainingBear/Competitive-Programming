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
  int n;
  cin >> n;
  vector<pair<int, int>> a;
  int x, b;
  for(int i = 0 ; i < n ; i++){
    cin >> x >> b;
    a.emplace_back(x, 1);
    a.emplace_back(b, -1);
  }
  sort(a.begin(), a.end());
  int cur = 0;
  int ans = 0;
  for(auto [x, y] : a){
    cur+=y;
    ans = max(ans, cur);
  }
  cout << ans << '\n';
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
