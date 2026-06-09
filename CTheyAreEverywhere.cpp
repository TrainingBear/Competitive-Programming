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
  int n;
  string s;
  cin >> n >> s;
  int l = 0;
  int r = 1;
  while(r < n && l<r) {
    while(l <= r && s[l]==s[r]) l++;
    r++;
  }

  int r = 0;
  map<char, bool> vis;
  for(int i = 0 ; i < n ; i++){
    while(vis[s[r]]) r++;
  }

  int last = r;
  while(r >= 0 && s[r]==s[last]) r--;
  r++;
  last = l;
  while(l < n && s[l]==s[last]) l++;
  cout << l << " " << r << '\n';
  cout << r-l+1 << '\n';
}
int main() {
  setIO(); int t = 1;
  while (t--) solve();
  return 0;
}
