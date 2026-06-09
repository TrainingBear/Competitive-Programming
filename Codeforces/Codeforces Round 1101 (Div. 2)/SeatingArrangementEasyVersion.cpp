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

int n, tab, s;
string f;
inline void solve(){
  cin >> n >> tab >> s >> f;

  int intr, extr, amb;
  intr = extr = amb = 0;

  int cnt = 0;

  unordered_map<int, int> table;
  int i = 1;
  for(auto x : f){
    intr+=x=='I';
    extr+=x=='E';
    amb+=x=='A';
  }
  for(auto x : f){
    if(x=='I'){
      if(table[i] != 0 && i+1 > tab) continue;
      intr--;
      table[i]++;
      int d = min(s-table[i], extr);
      cnt+=d+1;
      extr-=d;
      table[i] = s;
    }
    if(x=='E' && table[i] < s && table[i] != 0) {
      extr--;
      cnt++;
    }
    if(x=='E' && amb){
      amb--;
      table[i]++;
      int d = min(s-table[i], extr);
      cnt+=d+1;
      extr-=d;
      table[i] = s;
    }
    if(table[i] >= s) i++;
    if(i > tab) break;
  }
  for(int i = 1; i <= tab; i++){
    if(table[i]==0 && intr){
      table[i]++;
      cnt++;
    }
    if(table[i] < s && amb){
      int d = min(s-table[i], amb);
      amb-=d;
      cnt+=d;
    }
  }
  cout << cnt << '\n';
}
int main() {
  setIO(); int t = 1;

  cin >> t;

  while (t--) solve();
  return 0;
}
