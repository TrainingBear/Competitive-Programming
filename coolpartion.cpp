#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using v = vector<long long>;
using p = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
void bismilah(){ ios::sync_with_stdio(false); cin.tie(nullptr); } 

void solve(){
    ll n; cin >> n;
    v arr(n);
    int part = 0;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int dp[n];
    bool flag = false;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if(dp[j]==-1) continue;
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
        if(!flag) {
            part++;
        }
    }
    cout << (max(1, part)) << '\n';
}

int main() {
    bismilah();
    
    int t = 1;
    cin >> t; while (t--) { solve(); }

    return 0;
}

