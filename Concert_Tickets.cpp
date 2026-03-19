#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
long n, m;
inline void solve(){
    cin >> n >> m;
    map<long, int> a;
    for(int i = 0; i < n ;i++) {
        long x; cin >> x;
        a[x]++;
    }

    for(int i = 0; i < m ;i++) {
        long x;
        cin >> x;
        auto it = a.upper_bound(x);
        if(it != a.begin()){
            it--;
            cout << it->first << '\n';
            it->second--;
            if(it->second == 0) a.erase(it);
        } else cout << -1 << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}