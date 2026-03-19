#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s;

int cnt[26];
inline void solve(){
    cin >> s;
    memset(cnt, 0, sizeof(cnt));
    int n = s.size();

    unordered_map<char, int> cnt;
    for(auto&a:s) {
        cnt[a]++;
    }
    char ans[n+1];
    int flag = 0;
    int i = 1;
    pair<char, int> odd = {'a', -2};
    for(auto&a:cnt){
        flag += a.second&1;
        if(flag && n%2==0 || (flag > 1)){
            cout << "NO SOLUTION\n";
            return;
        }
        if(a.second&1){
            odd = a;
            continue;
        }
        
        while(a.second > 0){
            ans[i] = a.first;
            ans[n-i+1] = a.first;
            i++;
            a.second-=2;
        }
    }
    if(odd.second != -2){
        while(odd.second-2 > 0){
            ans[i] = odd.first;
            ans[n-i+1] = odd.first;
            i++;
            odd.second-=2;
        }
        ans[(n/2)+1] = odd.first;
    }
    for(int i = 1; i <= n; i++) cout << ans[i];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}