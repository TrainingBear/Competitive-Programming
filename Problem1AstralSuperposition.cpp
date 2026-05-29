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
int n, x, y;
const int MAXN = 1e3+5;
string a[MAXN];

inline void solve(){
  cin >> n >> x >> y;
  int stars = 0;
  for(int i = 0 ;i < n ; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < n ; i++){
    for(int j = 0; j < n; j++){
      stars+=a[i][j]!='W';
      if(a[i][j]=='G' && j-x >= 0 && i-y >= 0 && a[i-y][j-x] != 'G') stars--;
      if(a[i][j]=='B' && (x+y) != 0){
        if(j-x >= 0 && i-y >= 0 && a[i-y][j-x] != 'W')
          stars--;
        else {
          cout << -1 << '\n';
          return;
        }
      }
    }
  }
  cout << stars << '\n';

}

int main() {
  setIO(); int t = 1;

  cin >> t;

  while(t--){ solve(); }
  return 0;
}
