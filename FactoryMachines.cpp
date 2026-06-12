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
  int n, t;
  cin >> n >> t;
  int a[n];
  for(int i = 0 ; i < n ; i++) cin >> a[i];
  sort(a, a+n);
  ll l = 1, r = 1e18;
  while(l<r){
    ll mid = (l+r)/2;
    ll tar = 0;
    for(int i = 0; i < n ; i++){
      if(mid < a[i]) break;
      tar+=mid/a[i];
      if(tar >= t){
        r = mid;
        break;
      }
    }
    if(tar >= t){
      r = mid;
    } else l = mid+1;
  }
  cout <<r << '\n';
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
