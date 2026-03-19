#include <bits/stdc++.h>
using namespace std;
#define ll long long

const long MOD = 1e9+7, MAXN = 1e6+5;

inline void solve(){
    long n, x;
    cin >> n >> x;
    vector<long> a(n), dp(x+1);
    for(int i = 0; i < n; i++) cin >> a[i];

    dp[0] = 1;
    for(int i = 1; i <= x; i++){
        dp[i] = 0;
        for(long k : a){
            if (i - k >= 0) {
                dp[i] += dp[i - k];
                dp[i]%=MOD;
            }
        }
    }
    cout << dp[x]%MOD;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}