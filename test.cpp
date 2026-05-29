#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#define ll long long

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int a[n];

  for(int i = 0; i < n ; i++) cin >> a[i];
  int pref[n+1], suf[n+2];


  memset(pref, 0, sizeof(pref));
  memset(suf, 0, sizeof(suf));

  for(int i =0 ; i < n; i ++) pref[i+1] = pref[i] + a[i];
  for(int i =0 ; i < n; i ++) cout << pref[i+1] << " ";
  cout << '\n';
  suf[n-1] = a[n-1];
  for(int i = n-2; i >= 0; i--) suf[i] = suf[i+1] + a[i];
  for(int i = 0; i < n; i++) cout << suf[i] << " ";
  cout << '\n';
  cout << '\n';
  for(int i = 1; i <= n; i++) {
    cout << pref[i]+suf[i] << '\n';
  }
}
