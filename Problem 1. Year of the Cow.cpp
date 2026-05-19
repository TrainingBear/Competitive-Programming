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

  string zodiac[12] = {"Ox",   "Tiger",  "Rabbit",  "Dragon", "Snake", "Horse",
                       "Goat", "Monkey", "Rooster", "Dog",    "Pig",   "Rat"};
  map<string, int> indexedZodiac;
  for (int i = 0; i < 12; i++) {
    indexedZodiac[zodiac[i]] = i + 1;
  }

  for (int i = 0; i < n; i++) {
    string who, in, year, from;
    cin >> who;
    cin >> from >> from;
    cin >> in >> year;
    cin >> from >> from;
    cin >> from;
  }
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int t = 1;

  setIO("name");
  cin >> t;

  while (t--) {
    solve();
  }
  return 0;
}
