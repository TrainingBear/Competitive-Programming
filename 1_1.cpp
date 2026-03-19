#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    int mx = 0;
    for(int i = 0; i < n; i++) if(s[i]=='1') mx++;
    for(int i = 1 ; i+1 < n; i++){
        if(s[i-1] != '1' || s[i+1]!='1') continue;
        if(s[i]=='0') {
            s[i] = '1';
            mx++;
        }
    }
    int mn = mx;
    for(int i = 1 ; i+1 < n; i++){
        if(s[i-1] != '1' || s[i+1]!='1') continue;
        if(s[i]=='1'){
            s[i] = '0';
            mn--;
        }
    }
    cout << mn << " " << mx << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}