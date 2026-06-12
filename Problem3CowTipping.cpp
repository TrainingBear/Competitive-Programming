#include <bits/stdc++.h>
using namespace std;
#define ll long long
void setIO(string name) {
  freopen((name + ".in").c_str(), "r", stdin);
  freopen((name + ".out").c_str(), "w", stdout);
}


bitset<10> a[10];
void flip(int x, int y){
  for(int i = 0 ; i <= x; i++){
    for(int j = 0; j <= y; j++){
      a[i][j] = !a[i][j];
    }
  }
}

void solve(){
  int n; cin >> n;

  for(int i = 0 ; i< n ; i++){
    string s; cin >> s;
    for(int j = 0; j < n; j++){
      a[i][j] = s[j]-'0';
    }
  }

  // bool flip = 1;
  ll ans = 0;
  for(int i = n-1 ; i >= 0; i--){
    for(int j = n-1; j >= 0; j--){
      // if(!(flip ^ a[i][j])) ans++, flip^=1;
      if(a[i][j]) {
        flip(i, j);
        ans++;
      }
    }
  }
  cout << ans;
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;

  setIO("cowtip");
  // cin >> t;
  solve();
  return 0;
}
