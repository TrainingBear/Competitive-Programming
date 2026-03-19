#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long b, c, d; cin >> b >> c >>d;
    int cnt = 0;
    if(b > c && c == d) {
        cout << b-c << '\n';
        return;
    }
    if(b < c && c == d) {
        cout << 0 << '\n';
        return;
    }
    if(d==0)cnt++;
    for(int i = 1; i*i <= b; i++)
        if(c%i==d) cnt++;
    cout << cnt << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
