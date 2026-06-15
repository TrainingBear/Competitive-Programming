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
  int l, r, v;
  vector<int> indices;
  vector<pair<int, int>> a, query;
  for(int i = 0 ; i < n ; i++){
    cin >> l >> r >> v;
    indices.push_back(l);
    indices.push_back(r);
    a.emplace_back(l, v);
    a.emplace_back(r, -v);
  }
  for(int i = 0 ; i < q; i ++){
    cin >> l >> r;
    indices.push_back(l);
    indices.push_back(r);
    query.emplace_back(l, r);
  }
  sort(indices.begin(), indices.end());
  indices.erase(unique(indices.begin(), indices.end()), indices.end());
  vector<ll> diff(indices.size()+2), pref(indices.size()+1);

  auto get = [&indices](int p){
    return lower_bound(indices.begin(), indices.end(), p)-indices.begin();
  };
  for(auto [l, v] : a){
    diff[get(l)] += v;
  }
  for(int i = 1 ; i <= indices.size(); i++){
    diff[i]+=diff[i-1];
  }
  for(int i = 1; i <= indices.size(); i++){
    pref[i] = pref[i-1] + diff[i]*(indices[i]-indices[i-1]);
  }

  for(auto [l, r] : query){
    cout << pref[get(r)]-pref[get(l)] << '\n';
  }
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
