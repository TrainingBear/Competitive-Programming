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
  int n, x;
  cin >> n >> x;
  int a[n];
  for(int i = 0 ; i < n ; i++) cin >> a[i];

  int l = 0, r = 0;
  int sum = 0, cnt = 0;
  while(l < n && l<=r){
    if(sum <= x && r < n){
      sum+=a[r++];
    } else {
      sum-=a[l++];
    }
    if(sum==x) cnt++;
  }
  cout << cnt << '\n';
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
