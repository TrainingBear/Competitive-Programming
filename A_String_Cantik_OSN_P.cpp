#include <bits/stdc++.h>
using namespace std;

string S;

void solve(){
    cin >> S;
    int len = S.size();
    int o = 0, s = 0, n = 0, p = 0, ans = -1;
    int allp = 0;
    for(int i = 0; i < len; i++) {
        if(S[i]=='P')allp++;
    }
    for(int i = 0; i < len; i++){
        if(S[i]=='O') o++;
        if(S[i]=='S') s++;
        if(S[i]=='N') n++;
        if(S[i]=='P') {
            if(o > 0 && s > 0 && n > 0 && (allp-p) > 0){
                ans = max(ans, o+s+n+(allp-p));
            }
            p++;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}