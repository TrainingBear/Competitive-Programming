#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 1e6+5;
int dp[MAXN];

inline void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i= 0 ;i < n; i++) cin >> a[i];

    dp[0] = 0;
    for(int i = 1; i <= x; i++){
        dp[i] = MAXN;
        for(auto&k:a){
            if(i-k>=0){
                dp[i] = min(dp[i], dp[i-k]+1);
            }
        }
    }

    if(dp[x]==MAXN) cout << -1;
    else cout << dp[x];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}