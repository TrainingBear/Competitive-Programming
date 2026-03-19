#include <bits/stdc++.h>
using namespace std;

int n;
string s;
void solve(){
    cin >> n >> s;
    string ans1(""), ans2("");
    for(int i = 0 ; i < n; i++){
        if(s[i]=='2') {
            if(ans1 > ans2){
                ans2+='2';
                ans1+='0';
            }
            else {
                ans1 += '1';
                ans2 += '1';
            }
        }
        if(s[i]=='1'){
            if(ans1 > ans2){
                ans2+='1';
                ans1+='0';
            } else {
                ans1+='1';
                ans2+='0';
            }
        }
        if(s[i]=='0'){
            ans1+='0';
            ans2+='0';
        }
    }
    cout << ans1 << '\n';
    cout << ans2 << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}