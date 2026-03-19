#include <bits/stdc++.h>
using namespace std;

#define ll long long

long long t, a, b;

void solve(){
    cin >> a >> b;
    ll ans = -1;
    if(((a+b)%2) == 0) ans = a+b;
    if(a&1 && b&1) ans = max(ans, 1LL+a*b+1LL);
    else if(a%2==0 && (a%4==0 || b%2==0)) ans = max(ans, 2 + (1LL*a*b)/2);
    cout << ans;
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t; while (t--) solve();
}