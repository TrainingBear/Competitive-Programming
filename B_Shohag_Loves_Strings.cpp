#include <bits/stdc++.h>
using namespace std;

int t;
string s;
void solve(){
    cin >>s;
    if(s.size()<=1) {
        cout << -1 << '\n';
        return;
    }
    unordered_set<char> unique;
    vector<char> ans;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(i && s[i]==s[i-1]) {
            cout << s[i] << s[i] << '\n';
            return;
        }
        if(unique.insert(s[i]).second){
            ans.push_back(s[i]);
        } else {
            ans.clear();
            ans.push_back(s[i-1]);
            ans.push_back(s[i]);
        }
        if(ans.size()>=3){
            for (auto &c : ans) {
                cout << c;
            }
            cout << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t; while(t--) solve();
}