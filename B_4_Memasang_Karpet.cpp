#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;
int m, n;
long long dp[100005][4];

void solve(){
    cin >> m >> n;
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for(int i = 0; i < n; i++){
        for(int mask = 0; mask < (1<<m); mask++){
            if(dp[i][mask]==0) continue;
        }
    }
    cout << dp[n][0] << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}