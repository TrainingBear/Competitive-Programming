#include <bits/stdc++.h>
using namespace std;
#define ll long long

const long MOD = 1e9+7, MAXN = 2e6+6;

inline void solve(){
    int n; cin >> n;
    vector<long> dp(n+1, 0);
    dp[0]=1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(i-j>=0) {
                dp[i] += dp[i-j]%MOD;
                dp[i]%=MOD;
            }
        }
    }

    cout << dp[n];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}