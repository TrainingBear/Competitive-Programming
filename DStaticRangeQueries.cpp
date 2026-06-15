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
  int n, q; 
  cin >> n >> q;
  vector<pair<ll, ll>> a;
  ll l, r, v;
  for(int i = 0 ; i < n ; i++){
    cin >> l >> r >> v;
    a.emplace_back(l, v);
    a.emplace_back(r, -v);
  }
  sort(a.begin(), a.end());
  unordered_map<int, ll> cnt;
  for(int i = 0 ; i+1 < a.size() ; i++){
    auto [x, y] = a[i];
    cnt[x]
  }
}
int main() {
  setIO(); int t = 1;


  while (t--) solve();
  return 0;
}
