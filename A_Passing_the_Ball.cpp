#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
string s;

inline void solve(){
    cin >> n >> s;
    for(int i = 0; i < n ; i++){
        if(s[i]=='L') {
            cout << i+1 << '\n';
            return;
    }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}