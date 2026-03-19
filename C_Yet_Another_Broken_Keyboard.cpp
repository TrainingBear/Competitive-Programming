#include <bits/stdc++.h>
using namespace std;

int n, k, a[26];
string s;

inline void solve(){
    cin >> n >> k >> s;
    memset(a, 0, sizeof(a));
    for(int i = 0; i < k; i++) {
        char x; cin >> x;
        a[x-'a'] = 1;
    }

    int ptr = 0; 
    long long ans = 0;
    for(int i = 0; i < n;){
        while(i < n && !a[s[i]-'a']) i++;
        ptr = i;
        while(ptr < n && a[s[ptr]-'a']) ptr++;
        long long d = ptr-i;
        ans+=(d*(d+1LL))/2LL;
        i = ptr;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}