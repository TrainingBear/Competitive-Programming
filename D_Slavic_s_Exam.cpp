#include <bits/stdc++.h>
using namespace std;

int T;
string s, t;

void solve(){
    cin >> s >> t;
    int ptr = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='?') {
            if(ptr >= t.size()) s[i] = t[ptr-1];
            else s[i] = t[ptr];
        }
        if(s[i]==t[ptr]) ptr++;
    }
    if(ptr >= t.size())
        cout << "YES\n" << s << '\n';
    else cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> T; while(T--) solve();
}