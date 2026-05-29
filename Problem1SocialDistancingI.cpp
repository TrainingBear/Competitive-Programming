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
  int n;
  string s;
  cin >> n >> s;

  int l = 0, r = n-1;
  vector<int> a = {0, 0}, b={0}, c;
  int cnt = 0;
  while(s[l]=='0'){
    l++; cnt++;
  }
  if(cnt) c.push_back(cnt);
  a.push_back(cnt-1);
  b.push_back(cnt/3 - (cnt%3<2));

  cnt=0;
  while(r >= l && s[r]=='0'){
    r--, cnt++;
  }
  if(cnt) c.push_back(cnt);
  a.push_back(cnt-1);
  b.push_back(cnt/3 - (cnt%3<2));

  cnt = 0;
  for(;l<=r;l++){
    if(l+1 <=r && s[l]==s[l+1] && s[l]=='1') c.push_back(0);
    if(s[l]=='0') cnt++;
    else if(cnt) {
      c.push_back(cnt);
      a.push_back(cnt/2 - (cnt%2!=1));
      b.push_back(cnt/3 - (cnt%3<2));
      cnt = 0;
    }
  }

  sort(a.begin(),a.end(), greater<int>());
  sort(b.begin(),b.end(), greater<int>());
  sort(c.begin(),c.end());

  int ans = max(min(a[0], a[1]), b[0]);
  if(!c.empty()) ans = min(ans, c[0]);

  cout << ans+1 << '\n';
}

int main() {
  setIO("socdist1");
  int t = 1;

  while(t--){ solve(); }
  return 0;
}
