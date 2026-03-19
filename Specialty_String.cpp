#include <bits/stdc++.h>
using namespace std;
int n; string s;
int cnt[26];
void solve(){
    cin >> n >> s;
    int l = 0;
    int r = n-1;
    if(n==1) {
        cout << "NO\n";
        return;
    }
    for(int i = 0 ; i < n-1; i++){
        if(s[i]=='*') continue;
        memset(cnt, 0, sizeof(cnt));
        int j = i+1;
        for(; j < n; j++){
            if(s[j]=='*') continue;
            bool flag = 0;
            for(int x = 0; x < 26; x++){
                if(cnt[x]&1) {
                    flag = 1;
                    break;
                }
            }
            if(s[i]==s[j] && !flag){
                s[i] = '*';
                s[j] = '*';
                break;
            }
            cnt[s[j]-'a']++;
        }
        if(s[i]!=s[j]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}