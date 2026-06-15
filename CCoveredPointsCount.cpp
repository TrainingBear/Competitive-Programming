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
  int n; cin >> n;
  vector<pair<ll, ll>> a;
  for(int i = 0 ; i <n; i++){
    ll s, e;
    cin >> s >> e;
    a.emplace_back(s, 1);
    a.emplace_back(e+1, -1);
  }
  sort(a.begin(), a.end());
  ll ans[n+1];
  memset(ans, 0, sizeof(ans));
  ll cur = 0;
  for(int i = 0 ;i+1 < a.size() ; i++){
    auto[x, y] = a[i];
    cur+=y;
    if(cur <= n) ans[cur]+=a[i+1].first-x;
  }
  for(int i = 1; i <= n; i++) cout << ans[i] << " ";
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
