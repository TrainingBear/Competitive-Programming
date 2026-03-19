#include <bits/stdc++.h>
using namespace std;
#define ll long long
static ll n, p, l;
void solve(){
    cin >> n >> p >> l;
    ll kardus = p*l;
    ll target = n*p;
    ll ans = sqrt(target)+1;
    cout << max(ans, max(p, l)) << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}