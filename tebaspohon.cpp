#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n; cin >> n;
    ll m; cin >> m;
    ll arr[n];
    ll sum = 0;
    ll maxx = LLONG_MIN;
    for(int i = 0; i < n; i ++) {
        cin >> arr[i];
        sum += arr[i];
        maxx = max(maxx, arr[i]);
    }

    int ans = -1;
    if(sum < m) {
        cout << ans << '\n';
        return;
    }
    for(int i = maxx; i >= 0; i--){
        ll temp = sum - (i*n);
        if(temp >= m){
            cout << i << '\n';
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve();
}
