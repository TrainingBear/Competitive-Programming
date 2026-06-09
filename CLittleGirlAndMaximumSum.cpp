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
  int a[n+1];
  for(int i = 1 ; i <= n ; i ++){
    cin >> a[i];
  }

  sort(a+1, a+n+1, greater<int>());
  int diff[n+2];
  memset(diff, 0, sizeof(diff));
  int l, r;
  while(q--){
    cin >> l >> r;
    diff[l]++;
    diff[r+1]--;
  }

  for(int i = 1; i <= n; i++){
    diff[i]+=diff[i-1];
  }

  sort(diff+1, diff+n+1, greater<int>());
  ll ans = 0;
  for(int i = 1; i <= n; i++) ans += 1LL*a[i]*diff[i];
  cout << ans << '\n';
}
int main() {
  setIO(); int t = 1;


  while (t--) solve();
  return 0;
}
