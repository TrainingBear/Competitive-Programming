#include <bits/stdc++.h>
using namespace std;
#define ll long long

const long MOD = 1e9+7, MAXN = 1e3+5;
long dp[MAXN][MAXN];

inline void solve(){
    int n;
    cin >> n;
    memset(dp, 0, sizeof(dp));
    vector<string> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    dp[1][0] = 1;
    for(int i = 1; i <= n ;i++){
        for(int j = 1; j <= n; j++){
            if(a[i-1][j-1]=='*') continue;
            dp[i][j] += dp[i-1][j];
            dp[i][j]%=MOD;
            dp[i][j] += dp[i][j-1];
            dp[i][j]%=MOD;
        }
    }
    cout << dp[n][n];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}