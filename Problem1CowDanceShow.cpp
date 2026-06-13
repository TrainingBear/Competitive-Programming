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
  int n, t;
  cin >> n >> t;
  int a[n];
  for(int i = 0 ; i< n ; i++) {
    cin >> a[i];
  }
  int l = 1, r = n;
  while(l<r){
    int mid = (l+r)/2;
    ll sum = 0;
    bool flag = 1;
    priority_queue<int> pq;
    int ptr = mid;
    for(int i = 0; i < mid; i++) pq.push(-a[i]);
    while(!pq.empty()){
      sum += (-pq.top()-sum);
      pq.pop();
      if(ptr < n) pq.push(-(a[ptr++]+sum));
    }
    if(sum <= t) r = mid;
    else l = mid+1;
  }
  cout << r << '\n';
}
int main() {
  setIO("cowdance"); 
  int t = 1;

  while (t--) solve();
  return 0;
}
