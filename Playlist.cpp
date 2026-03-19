#include <bits/stdc++.h>
using namespace std;
#define ll long long


inline void solve(){
    int n;

    cin >>n;
    vector<long> a(n);

    for(int i =0 ; i <n ; i++) {
        cin >> a[i];
    }

    set<long> u;
    int ans = 1;
    int ptr = 0;
    for(int i =0; i < n; i++){
        while(u.count(a[i])) {
            u.erase(a[ptr]);
            ptr++;
        }
        u.insert(a[i]);
        ans = max(ans, i-ptr+1);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}