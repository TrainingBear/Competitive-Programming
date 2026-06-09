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
  int n, q, m, l = 0, r= 0; string s;
  char c;
  cin >> n >> s >> q;
  while(q--){
    cin >> m >> c;
    int ans = 0;
    l = 0, r= 0;
    while(r < n && l<=r){
      while(r<n){
        if(s[r]!=c) {
          if(m==0) break;
          m--;
        }
        r++;
      }
      ans = max(ans, r-l);
      m += s[l++] != c;
    }
    cout << ans << '\n';
  }

}
int main() {
  setIO(); int t = 1;


  while (t--) solve();
  return 0;
}
