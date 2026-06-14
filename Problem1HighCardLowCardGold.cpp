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
  int round1[n/2], round2[n/2];
  vector<bool> vis(2*n+1);
  for(int i = 0 ; i < n/2 ; i++) cin >> round1[i], vis[round1[i]] = 1;
  for(int i = 0 ; i < n/2 ; i++) cin >> round2[i], vis[round2[i]] = 1;
  sort(round1, round1+(n/2), greater<int>());
  sort(round2, round2+(n/2));

  int ptr = 2*n;
  int ans = 0;
  for(int i = 0 ; i < n/2; i++){
    while(ptr > round1[i] && vis[ptr]) ptr--;
    ans+=(ptr > round1[i]);
    vis[ptr] = 1;
  }
  ptr = 1;
  for(int i = 0 ; i < n/2; i++, ptr++){
    while(ptr < round2[i] && vis[ptr]) ptr++;
    ans+=(ptr < round2[i]);
  }
  cout << ans << '\n';
}
int main() {
  setIO("cardgame"); int t = 1;

  while (t--) solve();
  return 0;
}
