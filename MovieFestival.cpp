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
  pair<int, int> a[n];
  for(int i = 0 ;i <n ; i ++){
    cin >> a[i].second >> a[i].first;
  }
  sort(a, a+n);
  int ans = 1;
  for(int i = 0 ; i+1 < n ;){
    int r = i+1;
    while(r < n && a[r].second < a[i].first) r++;
    i = r;
    ans += (r < n);
  }
  cout << ans << '\n';
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
