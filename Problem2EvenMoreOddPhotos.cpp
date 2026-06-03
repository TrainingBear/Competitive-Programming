#include <bits/stdc++.h>
using namespace std;
#define ll long long
void setIO(string name) {
  freopen((name + ".in").c_str(), "r", stdin);
  freopen((name + ".out").c_str(), "w", stdout);
}

inline void solve() {
  int n; cin >> n;
  int a[n], even = 0, odd = 0;
  for(int i =0 ; i < n ; i++) {
    cin >> a[i];
    if(a[i]&1) odd++;
    else even++;
  }

  int groups = min(odd, even)*2 + (odd < even);
  odd = max(0, odd-even);
  while(odd >= 2){
    odd-=2;
    groups++;
    if(odd >= 1) odd--, groups++;
  }
  cout << groups-odd;
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
