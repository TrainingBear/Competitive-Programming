#include <bits/stdc++.h>
using namespace std;
#define ll long long
void setIO(string name) {
  freopen((name + ".in").c_str(), "r", stdin);
  freopen((name + ".out").c_str(), "w", stdout);
}

inline void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int i = 0;
  int back = n - 1;

  int first, end;
  first = end = 0;
  while (s[i] == '0') {
    first++;
    i++;
  }
  while (s[back] == '0') {
    back--;
    end++;
  }

  vector<int> unoccupied;
  if (first > 0)
    unoccupied.push_back(first - 1);
  if (end > 0)
    unoccupied.push_back(end - 1);
  for (; i <= back; i++) {
    int r = i;
    int len = 0;
    while (r <= back && s[i] == '0' && s[r] == s[i]) {
      len++;
      r++;
    }
    i = r;
    if (len > 0) {
      unoccupied.push_back((len / 2) + (len & 1));
    }
  }
  sort(unoccupied.begin(), unoccupied.end(), greater<int>());
  cout << unoccupied[1] << '\n';
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;

  setIO("socdist1");

  while (t--) {
    solve();
  }
  return 0;
}
