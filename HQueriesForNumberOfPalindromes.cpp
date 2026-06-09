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

string s;
int q;
inline void solve(){
  cin >> s >> q;
  int n = s.size();

  vector<int> pref(n+1, 0);
  vector<int> cnt(n, 0);
  for(int i = 0 ; i < n ; i++){
    for(int j = i ; j < n; j++){
      bool flag = 1;
      for(int k = i; k <= (i+j)/2; k++){
        if(s[k] != s[j-k+i]) {
          flag = 0;
          break;
        }
      }
      cnt[j] += flag;
    }
    // cout << c << " ";
  }

  for(int i =0 ; i < n ; i++){
    pref[i+1] = pref[i] + cnt[i];
  }

  int l, r;
  while(q--){
    cin >> l >> r;
    cout << pref[r]-pref[l-1] << '\n';
    // printf("%d - %d = %d \n", pref[r], pref[l-1], pref[r]-pref[l-1]);
  }
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
