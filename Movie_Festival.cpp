#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
long n;

inline void solve(){
    cin >> n;
    vector<pair<long, int>> a;
    for(int i = 0 ; i < n; i++){
        long x, y; 
        cin >> x >> y;
        a.emplace_back(x, y);
        // a.emplace_back(y, -1);
    };
    sort(a.begin(), a.end(), [](auto&a, auto&b){return a.second < b.second;});
    int ans = 1;
    int ptr = 1;
    for(int i = 0; i < n;){
        while(ptr < n && a[ptr].first < a[i].second) {
            ptr++;
        }

        if(ptr < n){
            ans++;
        }
        i = ptr;
        ptr++;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}