#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5;
int n;
long long dp[MAXN];

int i = 1;
inline void solve(){
    cin >> n;
    dp[0] = 0;
    for(; i <= n; i++){
        int d= i;
        int ans =0 ;
        while(d){
            ans+=d%10;
            d/=10;
        }
        dp[i] = dp[i-1] + ans ;
    }
    cout << dp[n] << '\n';
}

    // int d = n;
    // while(d){ ans+=d%10; d/=10; }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    int n;
    while(t--) {
        solve();
    }
}