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
  int a[n];
  for(int i = 0; i < n ; i++) cin >> a[i];
  sort(a, a+n, greater<int>());
  int r = 0;
  while(r < n && a[r] >= r) r++;
  cout << r << '\n';
}
int main() {
  setIO("lemonade"); int t = 1;

  while (t--) solve();
  return 0;
}
