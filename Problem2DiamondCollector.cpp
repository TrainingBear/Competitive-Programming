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
  int n, k; cin >> n >> k;
  int a[n];
  for(int i = 0;i < n; i++) cin >> a[i];

  sort(a, a+n);
  int ans = 0, best = 0;
  int l =0, r= 0;
  for(int i = 0, j = 0 ; i < n ; i++){
    while(j < n && a[j]-a[i] <=k) j++;
    while(r < i && a[r]-a[l] <=k) r++;
    best = max(best, r-l);
    ans = max(ans, j-i+best);
    if(a[r]-a[l] > k) 
      l++;
    
    // printf("%d, %d\n", j-i, r-l);
  }
  cout << ans << '\n';
}
int main() {
  setIO("diamond");
  int t = 1;

  while (t--) solve();
  return 0;
}
