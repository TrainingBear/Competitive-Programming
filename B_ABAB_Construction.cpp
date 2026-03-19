#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void solve(){
    cin >> n >> s;
    if(n&1 && s[0]=='b') {
        cout << "NO\n";
        return;
    }
    for(int i = n&1; i < n ; i+=2){
        if(s[i]==s[i+1]&&s[i]!='?'){
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