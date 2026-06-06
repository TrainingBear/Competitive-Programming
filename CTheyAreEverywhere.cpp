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
  int n; cin >> n;
  string s; cin >> s;

  unordered_set<char> u;
  for(auto a : s) u.insert(a);

  unordered_map<char, int> cnt;
  int ans = 2e9;
  int l = 0;
  int r = 0;
  while(r < n && l<=r){
    cnt[s[r]]++;
    while(l < r && cnt[s[l]] > 1) cnt[s[l++]]--;
    if(u.size() == cnt.size()) {
      ans = min(r-l+1, ans);
    }
    r++;
  }
  cout << ans << '\n';
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
