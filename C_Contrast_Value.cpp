#include <bits/stdc++.h>
using namespace std;

int const MAXN = 3e5+5;
long long n;

void solve(){
    cin >> n;
    vector<long long> a;
    for(int i = 0; i < n; i++) {
        long long x; cin >> x;
        if(!a.empty() && a.back() != x) a.push_back(x);
        else if(a.empty()) a.push_back(x);
    }
    n = a.size();
    long long ans = n;
    for(int i = 0 ; i + 2 < n ; i++){
        ans -= (a[i] <= a[i+1]) && (a[i+1] <= a[i+2]);
        ans -= (a[i] >= a[i+1]) && (a[i+1] >= a[i+2]);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t; while(t--) solve();
}