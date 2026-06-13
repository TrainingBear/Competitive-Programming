#include <bits/stdc++.h>
using namespace std;
#define ll long long
void setIO(string name = "") {
  if (name.size()) {
    freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
    cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
    freopen((name + ".out").c_str(), "w", stdout);
  }
}

inline void solve(){
  int x1,x2,y1,y2, n;
  string s;
  cin >> x1 >> y1 >> x2 >> y2 >> n >> s;

}
int main() {
  setIO(); int t = 1;

  cin >> t;

  while (t--) solve();
  return 0;
}
