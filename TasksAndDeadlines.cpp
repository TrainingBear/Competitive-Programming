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
  cin >> n;
  pair<int, int> a[n];
  for(int i = 0 ;i < n; i++) cin >> a[i].first >> a[i].second;
  sort(a, a+n);
  ll time = 0, score = 0;
  for(int i = 0 ; i<n ; i++){
    time+=a[i].first;
    score += a[i].second-time;
  }
  cout << score << '\n';
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
