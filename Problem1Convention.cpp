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
  int n, m, c;
  cin >> n >> m >> c;
  int a[n];
  for(int i = 0; i < n ;i ++) cin >> a[i];
  sort(a, a+n);
  int ans = 0;
  for(int i = 0; i < n; i+=c){
    ans = max(ans, a[i+c-1]-a[i]);
  }
  cout << ans << '\n';
}
int main() {
  setIO("convention"); int t = 1;

  while (t--) solve();
  return 0;
}
