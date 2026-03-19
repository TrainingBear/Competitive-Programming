#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int cnt1 = 0;
        int cnt0 = 0;
        bool flag = 0;
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='0'){
                if(cnt0 && cnt1 && !flag){
                    flag = true;
                    cnt0= 0; cnt1 =0;
                    ans++;
                }
                else if(cnt1) {
                    cnt1 = 0;
                    ans++;
                }
                cnt0++;
            }
            if(s[i]=='1'){
                if(cnt0 && flag){
                    cnt0 = 0;
                    ans++;
                }
                cnt1++;
            }
        }
        cout << ans+1 << '\n';
    }
}
