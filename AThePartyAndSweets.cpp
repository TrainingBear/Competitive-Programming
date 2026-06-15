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
  ll n, m;
  cin >> n >> m;
  ll sumBoy = 0, sumGirl = 0;
  ll ans = 0;
  ll mxb = 0, mxb2 = 0;
  ll mng = 1e9;
  ll x;
  for(int i = 0; i <n  ; i++) {
    cin >> x;
    sumBoy+=x;
    if(mxb <= x){
      mxb2 = mxb;
      mxb = x;
    } else if(mxb2 <= x){
      mxb2 = x;
    }
  }
  for(int i = 0 ; i < m; i++) {
    cin >> x;
    sumGirl+=x;
    mng = min(mng, x);
  }
  if(mxb > mng){
    cout << -1 << '\n'; return;
  }
  ans += (sumBoy * m);
  ans += sumGirl;
  ans -= (mxb*m);
  if(mng > mxb){
    ans+=mxb;
    ans-=mxb2;
  }
  cout << ans << '\n';
} 
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
