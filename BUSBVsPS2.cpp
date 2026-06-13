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

inline void solve(){
  int a, b, c, m;
  cin >> a >> b >> c >> m;
  vector<int> usb, ps2, both;
  for(int i = 0 ; i < m ; i++){
    string type;
    int price;
    cin >> price >> type;
    if(type=="USB") usb.push_back(price);
    if(type=="PS/2") ps2.push_back(price);
  }
  ll k = 0, price = 0;
  sort(usb.begin(), usb.end(), greater<int>());
  sort(ps2.begin(), ps2.end(), greater<int>());
  while(a-- && !usb.empty()){
    k++;
    price+=usb.back();
    usb.pop_back();
  }
  while(b-- && !ps2.empty()){
    k++;
    price+=ps2.back();
    ps2.pop_back();
  }
  both.insert(both.end(), usb.begin(), usb.end());
  both.insert(both.end(), ps2.begin(), ps2.end());
  sort(both.begin(), both.end(), greater<int>());
  while(c-- && !both.empty()){
    k++;
    price+=both.back();
    both.pop_back();
  }
  cout << k << " " << price << '\n';
}
int main() {
  setIO(); int t = 1;

  while (t--) solve();
  return 0;
}
