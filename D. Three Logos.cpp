#include <bits/stdc++.h>
using namespace std;
#define ll long long
void setIO(string name) {
  freopen((name + ".in").c_str(), "r", stdin);
  freopen((name + ".out").c_str(), "w", stdout);
}

inline void solve() {
  // x, y, belong
  array<int, 3> a[3];

  int luas = 0;
  char company[3] = {'A', 'B', 'C'};
  int sizes[3];

  for (int i = 0; i < 3; i++) {
    cin >> a[i][0] >> a[i][1];
    a[i][2] = i;
    if (a[i][0] < a[i][1])
      swap(a[i][0], a[i][1]);
    sizes[i] = a[i][0];
    luas += a[i][0] * a[i][1];
  }

  sort(a, a + 3, [](auto &a, auto &b) { return a[0] > b[0]; });

  int sisi = sqrt(luas);
  if (sisi != a[0][0]) {
    cout << -1 << '\n';
    return;
  }

  bool flip = 0;
  while (a[1][1] != a[2][1] && a[0][0] != a[1][0]) {
    swap(a[1 + flip][0], a[1 + flip][1]);
    sizes[a[1 + flip][2]] = a[1 + flip][0];
    flip = !flip;
  }

  if (a[0][0] == a[1][0] && a[0][0] != (a[0][1] + a[1][1] + a[2][1])) {
    cout << -1 << '\n';
    return;
  }

  cout << sisi << '\n';
  for (int i = 0; i < sisi; i++) {
    for (int j = 0; j < sisi; j++) {
      // print one of those
      for (int k = 0; k < 3; k++) {
        auto &[x, y, belong] = a[k];
        if (x <= 0)
          continue;
        x--;
        cout << company[belong];
        break;
      }
    }
    cout << '\n';
    for (auto &[x, y, belong] : a) {
      if (x == 0 && y > 1) {
        y--;
        x = sizes[belong];
      }
    }
  }
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;

  // setIO("name");

  while (t--) {
    solve();
  }
  return 0;
}
