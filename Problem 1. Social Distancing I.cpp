#include <bits/stdc++.h>
using namespace std;
#define ll long long
void setIO(string name = "") {
	cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
	if (sz(name)) {
		freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

inline void solve(){
  string a;
  int n;

  cin >> n >> a;
  int l = 0;
  int r = n-1;
  vector<int> v;
  int cnt = 0;
  while(a[l]=='0')
    l++, cnt++;
  if(cnt) v.push_back(cnt-1);
  cnt = 0;
  while(l<r && a[r]=='0')
    cnt++, r--;
  if(cnt) v.push_back(cnt-1);
  cnt = 0;

  for(;l<=r;l++){
    if(a[l]=='0') cnt++;
    else {
      if(cnt) v.push_back(cnt/2 + (cnt&1));
      cnt = 0;
    }
  }

  v.push_back(0);
  sort(v.begin(), v.end(), greater<int>());
  int ans = 0;
}

int main() {
  setIO(); int t = 1;

	while(t--){ solve(); }
	return 0;
}
