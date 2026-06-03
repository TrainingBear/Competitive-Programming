#include <bits/stdc++.h>
using namespace std;
#define ll long long
void setIO(string name) {
  freopen((name + ".in").c_str(), "r", stdin);
  freopen((name + ".out").c_str(), "w", stdout);
}

inline void solve() {}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n;
  string a, b;

  // setIO("breedflip");
  cin >> n >> a >> b;

  // 5
  // GHGHG
  // HGHGH
  //
  // 8
  // HHHHHHHH
  // GHHHGHHG
  for(int i = 0 ; i < n; i++){
    if(a[i] == b[i]) continue;
    int l = i, r = i;
    int beda = 0;
    for(int j = i+1; j < n; j++){
      if(a[j] != b[j]) r = j, beda++;
    }

    cout << beda << '\n';

    int step = 1;
    for(; l <= r; l++)
      if(a[i]!='G') step++;

    beda = min(beda, step);
    l = i;
    step = 1;
    for(; l <= r; l++)
      if(a[i]!='H') step++;
    beda = min(beda, step);

    cout << beda << '\n';
    break;
  }

  return 0;
}
