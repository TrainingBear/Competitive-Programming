#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll t;
string s;

inline void solve(){
    cin >> s;
    // if(s.size()==1) {cout << s << '\n'; return; }
    int n = s.size();
    int ans = n;
    bool edge = 0;
    bool flag = 0;
    for(int i = 0; i < n; i++){
        if(s[i]>='5'){
            if(!edge) {
                ans = i;
                if(i-1 >= 0) {
                    s[i-1] = (s[i-1]-'0'+1)+'0';
                }
                else {
                    s[i] = '1';
                    s+='0';
                    ans++;
                }
            } else {
                if(ans-1 >= 0) s[ans-1] = (s[ans-1]-'0'+1)+'0';
                else {
                    s[ans] = '1';
                    s+='0';
                    ans++;
                }
                flag = 1;
            }
            break;
        }
        else if(s[i]=='4'&&!edge){
            edge = 1;
            ans = i;
        }
        else if(s[i]!='4') {
            edge = 0;
            ans = n;
        }
    }
    if(!flag && edge) ans = n;
    for(int i = ans; i < n; i++) s[i] = '0';
    cout << s << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t; while(t--) solve();
}