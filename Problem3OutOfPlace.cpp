#include <bits/stdc++.h>
using namespace std;
#define ll long long
void setIO(string name) {
  freopen((name + ".in").c_str(), "r", stdin);
  freopen((name + ".out").c_str(), "w", stdout);
}

inline void solve() {
  int n; cin >> n;
  int origin[n], a[n];
  for(int i = 0 ;i  <n; i++) {
    cin >> a[i];
    origin[i] = a[i];
  }
  int cnt = 0;
  sort(a, a+n);
  for(int i = 0 ; i <n ; i ++) if(a[i]!=origin[i]) cnt++;
  cout << cnt-1 << '\n';
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;
  setIO("outofplace");

  while (t--) {
    solve();
  }
  return 0;
}
