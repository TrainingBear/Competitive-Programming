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
  int a[n];
  for(int i = 0 ; i < n ; i++) cin >> a[i];
  sort(a, a+n);
  ll ans1 = 0, ans2 = 0;
  for(int i = 0; i < n; i++){
    ans1+=abs(a[i]-a[n/2]);
    ans2+=abs(a[i]-a[n/2-1]);
  }
  cout << min(ans1, ans2);
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
