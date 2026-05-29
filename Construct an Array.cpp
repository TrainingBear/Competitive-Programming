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

const int MAXN = 1e3;
int n, cnt[MAXN];

inline void solve(){
  cin >> n;

  memset(cnt, 0, sizeof(cnt));
  int r = 0;
  vector<int> ans;
  for(int i = 1; i <= (2*n) && r < n ;i++){
    if(cnt[i]) continue;
    cnt[i] = 1;
    if(!ans.empty()){
      cnt[i + ans.back()] = 1;
    }
    ans.push_back(i);
    r++;
  }

  for(auto x : ans) cout << x << " ";
  cout << '\n';
}

int main() {
  setIO(); int t = 1;

	cin >> t;

	while(t--){ solve(); }
	return 0;
}
