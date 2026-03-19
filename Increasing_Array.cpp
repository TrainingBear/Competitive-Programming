#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
long n, a[MAXN];

inline void solve(){
    cin >> n;
    long ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i && a[i-1] > a[i]){
            ans += a[i-1]-a[i];
            a[i] = a[i-1];
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}