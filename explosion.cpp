#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using v = vector<long long>;
using p = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
void bismilah(){ ios::sync_with_stdio(false); cin.tie(nullptr); } 

void solve(){
    ll n; cin >> n;
    bool flag = false;
    v arr(n);
    v dp(n, 0);
    for (ll i = 0; i < n; i++) cin >> arr[i];
    while(count(all(arr), 0)==0){

    }
    for (ll i = 0; i < n; i++) {
        int byi = i+1;
        int byn = n-(i+1)+1;
        
        if(byi <= arr[i]){
            dp[i]+=arr[i]/byi;
            arr[i]%=byi;
        }
if(byn <= arr[i]){
            dp[i]+=arr[i]/byn;
            arr[i]%=byn;
        }
        if(i>1 && dp[i]!=dp[i-1]) flag = true;
    }
    for(int i : dp) cout << i << " ";
    if(!flag) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    bismilah();
    
    int t = 1;
    cin >> t; while (t--) { solve(); }

    return 0;
}

