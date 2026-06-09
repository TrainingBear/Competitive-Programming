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
const int MAXN = 1e2+5;
ll n, a[MAXN];
inline void solve(){
  cin >> n;
  for(int i = 0 ; i < n; i ++) {
    cin >> a[i];
  }
  sort(a, a+n);

  ll l = 0, r = n-1;
  int cnt = 0;
  while(l<r){
    ll mid = a[(l+r)/2];
    if(a[l]==a[r] && a[l]==mid) {
      l++, r--;
      continue;
    }
    a[l] = mid;
    a[r] = mid;
    l++, r--;
    cnt++;
  }

  cout << cnt << '\n';
}
int main() {
  setIO(); int t = 1;

  cin >> t;

  while (t--) solve();
  return 0;
}
