#include <bits/stdc++.h>
using namespace std;
#define ll long long
void setIO(string name) {
  freopen((name + ".in").c_str(), "r", stdin);
  freopen((name + ".out").c_str(), "w", stdout);
}

inline void solve() {
  ll n, k;

  cin >> n >> k;
  ll a[n];
  for(int i = 0 ; i < n ; i++) {
    cin >> a[i];
  }

  ll ans = k+1;

  int start = 0;
  for(int i = 0 ; i+1 < n ; i++){
    if(a[i+1]-a[i] > k){
      ans+= 1+k;
      start = i+1;
    } else ans += a[i+1]-a[i];
  }
  cout << ans;
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;

  while (t--) {
    solve();
  }
  return 0;
}
