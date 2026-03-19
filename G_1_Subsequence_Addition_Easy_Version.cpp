#include <bits/stdc++.h>
using namespace std;

int t, n, c[5005], dp[5005];

void build(){

}

inline void solve(){
    cin >> n;
    for(int i = 0; i < n;i++) {
        cin >> c[i];
    }

    sort(c, c+n);

    if(c[0]!=1) {
        cout << "NO\n";
        return;
    }
    memset(dp, 0, sizeof(dp));
    dp[1] = 1;
    for(int i = 1; i < n;i++){
        if(!dp[c[i]]) {
            cout << "NO\n";
            return;
        }
        for(int j = 5005; j >= c[i]; j--){
            dp[j] |= dp[j - c[i]];
        }
    };
    
    cout << "YES" << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin>>t;while(t--) solve();
}