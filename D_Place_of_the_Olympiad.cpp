#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long n, m, k;
void solve(){
    cin >> n >> m >> k;
    ll mx = (k/n)+(k%n!=0);
    long long space = m-mx;
    ll ans = mx/(space+1);
    if(mx >= space+1) ans+= mx%(space+1);
    cout << max(ans, 1LL) << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t; while(t--) solve();
}