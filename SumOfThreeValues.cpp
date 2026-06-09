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
  int a[n];
  unordered_map<int, int> loc, cnt;
  for(int i = 0 ;i < n ; i++) {
    cin >> a[i];
    loc[a[i]] = i+1;
    cnt[a[i]]++;
  }

  sort(a, a+n);

  for(int i = 0; i < n ; i++){
    int sum = a[i];
    int l = i, r= i;
    while(l < n && l<=r){
      sum+=a[r++];
    }
  }

  for(int i = 0 ;i < n ; i ++){
    for(int j = i+1; j < n; j++){
      cnt[a[i]]--;
      cnt[a[j]]--;
      int x2 = x-a[i] - a[j];
      if(x2 > 0 && loc[x2] && cnt[x2]){
        cout << i+1 << " " << j+1 << " " << loc[x2];
        return;
      }
      cnt[a[i]]++;
      cnt[a[j]]++;
    }
  }
  cout << "IMPOSSIBLE\n";
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
