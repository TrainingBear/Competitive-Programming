#include <bits/stdc++.h>
using namespace std;

string s;
int q;
void solve(){
    cin >> s >> q;
    int n = s.size();
    int pref[n+1];
    memset(pref, 0, sizeof(pref));
    for(int i = 0 ; i+1 < n; i++){
        pref[i+1] = pref[i] + (s[i]==s[i+1]);
    }
    int l, r;
    for(int i = 0 ; i < q; i++){
        cin >> l >> r;
        cout << pref[r-1]-pref[l-1] << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}