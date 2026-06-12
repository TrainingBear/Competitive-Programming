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
  int a[n];
  for(int i = 0 ;i < n ;i ++) cin >> a[i]; 
  vector<int> dp(n+1, 0);
  dp[2] = abs(a[1]-a[0]);
  for(int i = 3; i <= n; i++){
    dp[i] = min(dp[i-2] + abs(a[i-1]-a[i-3]), dp[i-1] + abs(a[i-1]-a[i-2]));
  }
  cout << dp[n];
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
