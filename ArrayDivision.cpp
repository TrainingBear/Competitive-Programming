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
  int n, k;
  cin >> n >> k;
  int a[n];
  for(int i = 0; i < n ; i++) {
    cin >> a[i];
  }
  int l = 1, r= 1e9;
  while(l<r){
    int mid = (l+r)/2;
    int sum = 0, cnt = 0;
    for(int i = 0; i < n ; i++){
      if(a[i]>mid){
        l = mid+1;
        break;
      }
      if(sum+a[i] > mid) sum = a[i], cnt++;
      else sum+=a[i];
    }
    cnt+=(sum > 0);
    if(cnt <= k){
      r = mid;
    } else l = mid+1;
  }
  cout << r << '\n';
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
