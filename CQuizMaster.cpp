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

const int MAXN = 1e5+5;
int n, m, a[MAXN], freq[MAXN];
vector<int> f[MAXN]; 
inline void solve(){
  cin >> n >> m;
  memset(freq, 0, sizeof(freq));
  for(int i = 0 ; i <n  ;i++) cin >> a[i];
  sort(a, a+n);
  int ans = 1e9, cnt = 0;
  for(int i = 0, j = 0; i < n; i ++){
    while(j < n && cnt < m){
      for(int x : f[a[j]])
        if(x <= m) {freq[x]++; if(freq[x]==1) cnt++;}
        else break;
      j++;
    }
    if(cnt==m) 
      ans = min(ans, a[j-1]-a[i]);

    for(int x : f[a[i]])
      if(x <= m) {freq[x]--; if(freq[x]==0) cnt--;}
      else break;
  }
  cout << (ans == 1e9 ? -1 : ans) << '\n';
}
int main() {
  setIO(); int t = 1;
  for(int i = 1; i <= 1e5; i++){
    for(int j = i; j <= 1e5; j+=i){
      f[j].push_back(i);
    }
  }

  cin >> t;

  while (t--) solve();
  return 0;
}
