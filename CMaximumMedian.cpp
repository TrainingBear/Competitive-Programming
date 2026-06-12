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
  int n, k;
  cin >> n >> k;
  int a[n+1];
  a[n] = 0;
  for(int i = 0 ; i < n ; i++) cin >> a[i];
  sort(a, a+n);

  ll sum = k;
  int j = 0;
  for(int i = n/2; i < n; i++){
    sum += a[i];
    j++;
    if(sum/j <= a[i+1]) break;
  }
  cout << sum/j << '\n';
}
int main() {
  setIO(); int t = 1;


  while (t--) solve();
  return 0;
}
