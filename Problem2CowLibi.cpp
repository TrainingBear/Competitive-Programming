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
  int g, n, cnt = 0;
  cin >> g >> n;
  array<int, 3> grazing[g], cow[n];
  for(int i = 0 ;i <  g; i++){
    cin >> grazing[i][0] << grazing[i][1] << grazing[i][2];
  }
  sort(grazing, grazing+g, [](auto&a, auto&b){
    return a[2] < b[2];
  });

  for(int i = 0; i < n ; i++) {
    cin >> cow[i][0] >> cow[i][1] >> cow[i][2];
    auto[x,y, t] = cow[i];
    
  }
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
