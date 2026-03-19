#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
long n;

inline void solve(){
    cin >> n;
    vector<pair<long, int>> a;
    for(int i = 0 ; i < n; i++){
        long x, b; 
        cin >> x >> b;
        a.emplace_back(x, 1);
        a.emplace_back(b, -1);
    };
    sort(a.begin(), a.end());
    int cnt = 0;
    int ans = 0;
    for(auto [x, y] : a){
        cnt+=y;
        ans = max(cnt, ans);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}