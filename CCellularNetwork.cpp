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
  int n, m;
  cin >> n >> m;
  int a[n], b[m];
  vector<int> dist(n, 2e9+7);

  for(int i = 0; i < n ; i++) cin >> a[i];
  for(int i = 0; i < m ; i++) cin >> b[i];

  int r = 0;
  for(int i = 0 ; i < n ; i++){
    while(r+1 < m && b[r] < a[i]) r++;
    if(b[r] >= a[i]) 
      dist[i] = min(dist[i], b[r]-a[i]);
  }
  r = m-1;
  for(int i = n-1 ; i >= 0 ; i--){
    while(r > 0 && b[r] > a[i]) r--;
    if(b[r] <= a[i]) 
      dist[i] = min(dist[i], a[i]-b[r]);
  }

  cout << *max_element(dist.begin(), dist.end());
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
