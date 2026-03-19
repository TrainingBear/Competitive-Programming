#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;

int n;

inline void solve(){
    cin >> n;
    vector<pair<int, int>> a;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a.emplace_back(x, i);
    }
    sort(a.begin(),a.end(),
     [](auto&a, auto&b){
        if(a.first==b.first) return a.second > b.second;
        return a.first > b.first;
    });
    int ans = 0;
    int mn = n-1;
    for(int i = 0; i < n ;i++){
        if(a[i].second <= mn){
            // cout << a[i].second << ": " <<mn << " ";
            ans ++;
            mn = a[i].second;
        }
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