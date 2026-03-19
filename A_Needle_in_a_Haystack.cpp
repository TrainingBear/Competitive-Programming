#include <bits/stdc++.h>
using namespace std;

int T;

void solve(){
    string s, t;
    cin >> s >> t;
    char ans[s.size()];
    char sorted_t[t.size()];
    for(int i = 0; i < s.size(); i++) ans[i] = s[i];
    for(int i = 0; i < t.size(); i++) sorted_t[i] = t[i];
    sort(ans, ans+s.size());
    sort(sorted_t, sorted_t+t.size());

    int ptr = 0;
    for(int i = 0; i < s.length(); i++){ 
        if(s[i]==t[ptr]) ptr++;
    }
    if(ptr < t.size()) {
        cout << "Impossible\n";
        return;
    }

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> T; while(T--) solve();
}