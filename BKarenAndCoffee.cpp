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


const int MAXN = 2e5+5;
int diff[MAXN];
inline void solve(){
  int n, k, q;
  cin >> n >> k >> q;
  int l, r; 
  memset(diff, 0, sizeof(diff));
  for(int i = 0 ; i <n  ;i++){
    cin >> l >> r;
    diff[l] +=1;
    diff[r+1] -=1;
  }

  vector<int> admisible(MAXN, 0);
  for(int i = 1; i <= MAXN-1; i++) {
    diff[i]+=diff[i-1];
    admisible[i] += admisible[i-1] + (diff[i] >= k);
  }

  while(q--){
    cin >> l >> r;
    cout << admisible[r]-admisible[l-1] << '\n';
    continue;
  }
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
