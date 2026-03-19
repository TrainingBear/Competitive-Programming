#include <bits/stdc++.h>
using namespace std;

int t, n, k; 
const int MAXN = 2e5+5;
string s;

void solve(){
    cin >> n >> k >> s;
    string ans(n, '+');
    cin >> n >> k >> s;
    int a = count(s.begin(), s.end(), '0');
    int b = count(s.begin(), s.end(), '1');
    int c = count(s.begin(), s.end(), '2');
    string ans(n, '+');
    for (int i = 0; i < n; ++i) {
      if (i < a + c || i >= n - b - c) ans[i] = '?';
      if (i < a || i >= n - b || k == n) ans[i] = '-';
    }
    cout << ans << '\n';
}

int main(){
    cin >> t;
    while(t--) solve();
}