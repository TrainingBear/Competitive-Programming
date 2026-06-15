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

long long n;
inline void solve(){
  cin >> n;
  if(n==10) {
    cout << -1 << '\n';
    return;
  }
  int pa[12] = {
    0,1,2,3,4,5,6,7,8,9,22,11
  };
  long long P = pa[n%12];
  cout << P << " " << n-P << '\n';
}
int main() {
  setIO(); int t = 1;

  cin >> t;

  while (t--) solve();
  return 0;
}
