#include <bits/stdc++.h>
using namespace std;

int const MAXN = 2e5+5;
int a[MAXN], n;

void solve(){
    cin >> n;
    unordered_map<int, int> cnt;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        cnt[x]+=1;
    }
    int ans = 0;
    for(auto&a:cnt){
        ans+= a.second - (a.second%a.first);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}