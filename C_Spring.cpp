#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a, b, c, m;

inline void solve(){
    cin >> a >> b >> c >> m;
    
    ll A = m / a;
    ll B = m / b;
    ll C = m / c;

    ll AB = m / lcm(a, b);
    ll AC = m / lcm(a, c);
    ll BC = m / lcm(b, c);
    ll ABC = m / lcm(lcm(a, b), c);

    ll AB_only = AB - ABC;
    ll AC_only = AC - ABC;
    ll BC_only = BC - ABC;

    ll A_only = A - AB_only - AC_only - ABC;
    ll B_only = B - AB_only - BC_only - ABC;
    ll C_only = C - AC_only - BC_only - ABC;

    ll ALICE = 6*A_only + 3*(AB_only + AC_only) + 2*ABC;
    ll BOB   = 6*B_only + 3*(AB_only + BC_only) + 2*ABC;
    ll CAROL = 6*C_only + 3*(AC_only + BC_only) + 2*ABC;

    cout << ALICE << " " << BOB << " " << CAROL << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}