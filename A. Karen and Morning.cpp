#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long

string s;

inline void solve() {
  cin >> s;
  int h = stoi(s.substr(0, 2));
  int m = stoi(s.substr(3, 2));

  ll cnt = 0;
  while (true) {
    string res =
        (h < 10 ? "0" : "") + to_string(h) + (m < 10 ? "0" : "") + to_string(m);

    if (res[0] == res[3] && res[1] == res[2])
      break;
    cnt++;
    m++;
    m %= 60;
    if (m == 0) {
      h++;
      h %= 24;
    }
  }
  cout << cnt << '\n';
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;

  while (t--) {
    solve();
  }
  return 0;
}
