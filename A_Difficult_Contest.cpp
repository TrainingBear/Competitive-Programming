#include <bits/stdc++.h>
using namespace std;

string s;
void solve(){
    cin >> s;
    sort(s.begin(), s.end(), greater<char>());
    cout << s << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}