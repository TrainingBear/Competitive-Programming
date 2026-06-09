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
ll n, a[MAXN];
inline void solve(){
  cin >> n;
  for(int i = 0; i < n ; i++) cin >> a[i];

  ll sum = 0;
  ll mn = 1e13;
  for(int i = 0; i < n ; i++) {
    sum+=a[i];
    mn = min(sum/(i+1), mn);
    cout << mn << " ";
  }
  cout << '\n';
}
int main() {
  setIO(); int t = 1;

  cin >> t;

  while (t--) solve();
  return 0;
}
