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
  int n, m, k;
  cin >> n >> m >> k;
  ll a[n+1], diff[n+2], diff2[m+2];
  pair<int, int> query[k+1];
  array<int, 3> op[m+1];
  memset(diff, 0, sizeof(diff));
  memset(diff2, 0, sizeof(diff2));
  for(int i = 1 ; i <=n ;  i++) cin >> a[i];
  for(int i = 1 ; i <=m ;  i++) cin >> op[i][0] >> op[i][1] >> op[i][2];
  for(int i = 1 ; i <=k ;  i++) {
    cin >> query[i].first >> query[i].second;
    auto[l, r] = query[i];
    diff2[l]+=1;
    diff2[r+1]-=1;
  }
  for(int i = 1; i<=m; i++)
    diff2[i]+=diff2[i-1];
  
  for(int i = 1 ; i <=m ;  i++) {
    auto[l, r, d] = op[i];
    diff[l]+=d*(diff2[i]);
    diff[r+1]-=d*(diff2[i]);
  }

  for(int i = 1; i<=n; i++) {
    diff[i]+=diff[i-1];
    cout << a[i] + diff[i] << " ";
  }
}
int main() {
  setIO(); int t = 1;
  while (t--) solve();
  return 0;
}
