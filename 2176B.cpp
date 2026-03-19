#include <bits/stdc++.h>
using namespace std;
int t, n;
int ans = 0;
string s;

void solve(){
    cin >> n >> s;
    ans = 0;
    int l0 = 0;
    int l1 = 0;
    bool flag = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='1'){
            l1 = i;
            flag = 1;
        }
        if(!flag) continue;
        if(s[i]=='0'){
            ans = max(i-l1, ans);
            l0 = i;
        }
    }
    if(s[0]=='0'){
        for(int i = 0; i < n; i++) {
            if(s[i]=='1') break;
            if(s[i]=='0') {
                l0 = i;
            }
        }
        ans = max(n-l1+l0, ans);
    }

    std::cout << ans << '\n';
}

int main(){
    cin >> t;
    while(t--) solve();
}