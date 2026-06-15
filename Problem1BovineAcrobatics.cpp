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
  int n, m, k;
  cin >> n >> m >> k;
  pair<int, int> a[n];
  for(int i = 0 ; i < n ; i++) cin >> a[i].first >> a[i].second;
  sort(a, a+n, greater<pair<int, int>>());
  ll ans = 0;
  vector<int> valid;
  valid.push_back(0);
  int last = 0;
  for(int i = 1 ; i < n; i++){
    if(a[last].first-a[i].first >=k){
      valid.push_back(i);
      last = i;
    }
  }
  sort(valid.begin(), valid.end(), [&a](int b, int c){
    return a[b].second < a[c].second;
  });
  int r = 0;
  ll d = 0;
  while(m && r < int(valid.size())){
    int amount = a[valid[r]].second-d;
    amount = min(amount, m);
    ans+=(amount) * (valid.size()-r);
    d+=amount;
    r++;
    m-=amount;
  }
  ans+=m;
  cout << ans << '\n';
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
