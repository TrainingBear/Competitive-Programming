#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;
inline void solve(){
    cin >> s;
    int n = s.size();
    char last = 'a';
    int cnt = 0;
    int ans = 1;
    for(auto&a:s){
        if(a==last){
            cnt++;
        } else {
            ans = max(ans, cnt);
            last = a;
            cnt = 1;
        }
    }
    ans = max(ans, cnt);
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}