#include <bits/stdc++.h>
using namespace std;
#define ll long long
inline void solve(){
  int n, t;
  cin >> n >> t;
  int a[n];
  for(int i = 0; i < n ; i++) cin >> a[i];

  int ans = 0,l = 0, r = 0;

  int spent = 0;
  while(r < n && l<=r){
    if(spent <= t) spent+=a[r++];
    else spent-=a[l++];

    if(spent <= t) ans = max(ans, r-l);
  }
  cout << ans << '\n';
}
int main() {
  cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
  solve();
}
