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
  int n, q;
  cin >> n >> q;
  vector<int> diff(n+2, 0);
  int l, r;
  while(q--){
    cin >> l >> r;
    r++;
    diff[l]++;
    diff[r]--;
  }

  for(int i = 1; i <= n; i++) diff[i]+=diff[i-1];
  sort(diff.begin()+1, diff.end()-1);
  cout << diff[n/2];
}
int main() {
  setIO(); int t = 1;


  while (t--) solve();
  return 0;
}
