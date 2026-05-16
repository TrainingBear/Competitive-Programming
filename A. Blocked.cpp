#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline void solve() {
  int n;
  cin >> n;
  int a[n];
  int cnt[101];
  memset(cnt, 0, sizeof(cnt));
  for (int i = 0; i < n; i++)
    cin >> a[i], cnt[a[i]]++;
  for(int i = 0 ; i <= 101; i++){
    if(cnt[i] >= 2) {
      cout << -1 << '\n';
      retunr
    }
  }
  sort(a, a + n, greater<int>());
  for (int i : a)
    cout << i << " ";
  cout << '\n';
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
