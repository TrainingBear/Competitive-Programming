#include <bits/stdc++.h>
using namespace std;
int t = 0;
#define ll long long int
void solve(){
    ll n; cin >> n;
    ll m; cin >> m;
    vector<ll> a(n);
    ll sum[n+1];
    bool flag = false;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum[i+1] = sum[i] + a[i];
        if(a[i] > (m/n)) flag = true;
    }
    if(!flag)cout << "infinite\n";
    else {
        for(int i = 1; i <= n; i++){
            int x = i==n? m : (m/(n-i));
            int temp = sum[i] + (x*(n-i));
            if(temp >= m) {
                cout << m/(n-i+1) << '\n';
                return;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve();
}
