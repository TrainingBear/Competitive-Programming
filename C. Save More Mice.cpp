#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 4e5 + 5;

long n, a[MAXN], k;

inline void solve() {
  cin >> n >> k;
  for (int i = 0; i < k; i++) {
    cin >> a[i];
  }
  long ptr = 0;
  sort(a, a + k);
  long m = k - 1;
  int cnt = 0;
  while (ptr < n) {
    ptr += n - a[m];
    cnt++;
    m--;
  }
  cout << cnt - 1 << '\n';
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;

  cin >> t;

  while (t--) {
    solve();
  }
  return 0;
}
