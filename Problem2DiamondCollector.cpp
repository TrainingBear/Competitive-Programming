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
  int n, k;
  cin >> n >> k;
  int a[n];
  for(int i = 0 ;i  < n ; i++) cin >> a[i];
  sort(a, a+n);
  int l = 0, r= 0, l2 = 0, r2 = 0;
  int mx = -1, mxl, mxr, ans = 0;
  int case1 = 0, case2 = 0;
  while(r < n && l<=r){
    while(r<n && a[r]-a[l] <= k) r++;
    // case1 = max(case1, r-l);
    while(r2 < l && a[r2]-a[l2] <= k) r2++;
    // if(mx==-1 || r-l >= mx){ mx = r-l; mxl = l; mxr = r; }
    ans = max(ans, (r-l)+(r2-l2));
    if(a[r2]-a[l2] > k) l2++;
    l++;
  }
  // for(int i = 0, j = 0; i < mxl; i++){
  //   while(j<mxl && a[j]-a[i] <= k) j++;
  //   case2 = max(case2, j-i);
  // }
  // for(int i = mxr, j = mxr; i < n; i++){
  //   while(j<n && a[j]-a[i] <= k) j++;
  //   case2 = max(case2, j-i);
  // }
  // // cout << case1 <<" "<< case2;
  // ans = case1+case2;
  cout << ans << '\n';
}
int main() {
  setIO("diamond");
  int t = 1;

  while (t--) solve();
  return 0;
}
