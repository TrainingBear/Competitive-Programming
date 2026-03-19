#include <bits/stdc++.h>
using namespace std;

int n, cnt[26];
string s;

void solve(){
    cin >> n >> s;
    memset(cnt, 0, sizeof(cnt));
    cnt[s[0]-'a'] = 1;
    int ans = n;
    for(int i = 1; i < n; i++){
        while(i < n && cnt[s[i]-'a']) i++;
        if(i>=n) break;
        ans+=n-i;
        cnt[s[i]-'a']++;
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