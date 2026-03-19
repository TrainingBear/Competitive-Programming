#include <bits/stdc++.h>
using namespace std;

long t, n , x, y;
string s;

void solve(){
    cin >> n >> x >> y >> s;
    x = abs(x);
    y = abs(y);
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++) {
        if(s[i]=='8') {
            a++;
        }
        b++;
    }
    if(x+y > a+b || max(x, y) > max(a, b)) cout << "NO\n";
    else cout << "YES\n";
}

int main(){
    cin >> t;
    while(t--) solve();
}