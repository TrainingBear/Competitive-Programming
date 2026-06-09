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
  int n, m;
  cin >> n >> m;
  int a[n];
  for(int i = 0 ; i < n ;i ++) cin >> a[i];

  for(int i = 1; i < n ;i ++){
    a[i] = max(a[i], a[i-1]-m);
  }
  for(int i = n-2; i >= 0 ;i --)
    a[i] = max(a[i], a[i+1]-m);

  for(auto x : a) cout << x << " ";
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
