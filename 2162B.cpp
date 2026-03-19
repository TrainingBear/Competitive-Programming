#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;

void solve(){
    cin >> n >> s;

    set<int> ans;

    for(int i = 0; i < n-1; i++){
        if(s[i]=='0'){
            ans.insert(i+1);
        }
    }
    cout << ans.size() << '\n';

    for (int i : ans) {
        cout << i << " ";
    }
    cout << '\n';
}

int main(){
    cin >> t;
    while(t--) solve();
}