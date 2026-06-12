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
  int n, x;
  cin >> n >> x;

  pair<int, int> a[n+1];
  for(int i = 1 ; i<= n ; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a+1, a+n+1);

  for(int i = 1; i <= n; i++){
    int l = i+1, r = n;
    while (l < r){
      ll sum = a[l].first + a[r].first + a[i].first;
      if(sum > x) r--;
      else if(sum < x) l++;
      else {
        cout << a[l].second << " " << a[r].second << " " << a[i].second << '\n';
        return;
      }
    }
  }
  cout << "IMPOSSIBLE\n";
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
