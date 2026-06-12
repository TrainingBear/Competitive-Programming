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
  n+=1;
  int a[n][3];
  for(int i = 1 ; i <= n-1 ; i++) for(int j = 0; j < 3; j++) cin >> a[i][j];
  ll dp[n][4];
  memset(dp, 0, sizeof(dp));
  for(int i = 0; i < 3; i++) dp[1][i] = a[1][i];
  for(int i = 2; i <=n-1; i++){
    for(int j = 0; j < 3; j++){
      ll mx = 0;
      for(int k = 0; k < 3; k++)
        if(j!=k) mx = max(mx, dp[i-1][k]);
      dp[i][j] = mx + a[i][j];
    }
  }
  ll ans = 0;
  for(int i = 0; i < 3; i++) {
    ans = max(ans, dp[n-1][i]);
  }
  cout << ans << '\n';
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
