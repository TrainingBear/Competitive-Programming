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
  int a[n], g[m], girls = 0;
  for(int i = 0; i <n  ; i++) cin >> a[i];
  for(int i = 0 ; i < m; i++) cin >> g[i];
  sort(a, a+n, greater<int>());
  sort(g, g+m, greater<int>());
  int r = 0;
  ll ans = 0;
  for(int i = 0 ; i < n ; i++){
    ll sum = 0;
    bool flag = 1;
    int j = 0;
    while(r < m){
      if(a[i] > g[r]){
        cout << -1 << '\n';
        return;
      }
      if(a[i]==g[r]) flag = 0;
      sum += g[r++];
      j++;
    }
    if(flag && j == m) {
      r--, j--;
      sum-=g[r];
    }
    sum+=a[i]*(m-j);
    ans+=sum;
  }
  cout << ans << '\n';
} 
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
