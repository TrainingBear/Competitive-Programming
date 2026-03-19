#include <bits/stdc++.h>
using namespace std;

long t, n, x, y;

void solve(){
    cin >> n >> x >> y;
    string s; cin >> s;
    if(x > n || y > n) {
        cout << "NO\n";
        return;
    }
    bool flag = false;
    int step = 0;
    for(int i = 0; i < n; i++) {
        if(s[i]=='8') {
            step += 2;
        }
        if(s[i]=='4') {
            step++;
        }
    }

    if(abs(x) + abs(y) <= step) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    cin >> t; while(t--){
        solve();
    }
}