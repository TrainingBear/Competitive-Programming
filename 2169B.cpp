#include <bits/stdc++.h>
using namespace std;
int t, ans, dir[3];
string s;

void solve(){
    cin >> s;
    ans = s.size();
    memset(dir, 0, sizeof(dir));
    for(int i = 0; i < ans; i++){
        if(s[i]=='<') {
            if(dir[2] || (dir[1] && s[i-1]=='*')){
                cout << -1 << '\n';
                return;
            }
            dir[0]++;
        }
        if(s[i]=='*') {
            if((dir[1] && s[i-1]==s[i]) || (dir[2] && s[i-1]=='>')){
                cout << -1 << '\n';
                return;
            }
            dir[1]++;
        }
        if(s[i]=='>') {
            dir[2]++;
        }
    }
    cout << max(dir[0], dir[2]) + dir[1] << '\n';
    // std::cout << ans << '\n';
}

int main(){
    cin >> t; while(t--){
        solve();
    }
}