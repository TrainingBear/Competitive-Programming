#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n; cin >> n;
    ll m; cin >> m;
    ll arr[n];
    ll sums = 0, maxx = LLONG_MIN; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        maxx = max(arr[i], maxx);
        sums+=arr[i];
    }
    if(sums<m) {
        cout << -1 << '\n';
        return;
    }
    for(int i = n; i >=0 ; i--){
        ll sum = 0;
        for(int j : arr){
            if(j < i) continue;
            sum += j-i;
        }
        if(sum >= m) {
            cout << i << '\n';
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);solve();
}
