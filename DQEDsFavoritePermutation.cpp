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
const int MAXN = 2e5+5;
int n, q, a[MAXN];
string s;
inline void solve(){
  cin >> n >> q;
  for(int i = 0 ; i < n ; i++) cin >> a[i];
  cin >> s;
  while(q--){
  }
}
int main() {
  setIO(); int t = 1;

  cin >> t;

  while (t--) solve();
  return 0;
}
