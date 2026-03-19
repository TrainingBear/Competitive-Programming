#include <bits/stdc++.h>
using namespace std;
void solve(){
    string S = "";
    cin >> S;
    int nn = S.length();
    if(nn < 3) cout << -1 << '\n';
    int cnt = 0;
    int o = 0, s = 0, n = 0;
    for(int i = 0; i < nn; i++){
        if(S[i]=='O') o++;
        if(S[i]=='S') s++;
        if(S[i]=='N') n++;
        while(o>0 && s > 0 && n > 0){
            o--;--s;--n;
            cnt+=3;
        }
    }
    cout << (cnt<3? -1 : cnt) << '\n';
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve();
}
