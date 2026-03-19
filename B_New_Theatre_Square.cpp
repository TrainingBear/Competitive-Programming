#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, x, y;
string a[105];

inline void solve(){
    cin >> n >> m >> x >> y;
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        int ptr = 0;
        for(int i = 0; i < m;){
            while(i < m && s[i]=='*') i++;
            ptr = i;
            while(ptr < m && s[ptr]=='.') ptr++;
            long d = ptr-i;
            if(y/2 < x && d > 1){
                ans+= (d/2)*y;
                ans+= (d%2)*x;
            } else ans+= d*x;
            i = ptr;
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