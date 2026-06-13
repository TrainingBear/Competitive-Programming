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
  int a[n];
  for(int i =0 ; i < n ;i++) cin >> a[i];
  sort(a, a+n);
  int sum = 0;
  int i = 0;
  while(i < n && sum + a[i] <= k) sum+=a[i++];
  cout << i << '\n';
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
