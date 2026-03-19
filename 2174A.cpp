#include <bits/stdc++.h>
using namespace std;

int T;
string s, t;

void solve(){
    cin >> t >> s;
    string copyt = t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    int ptr = 0;
    string preans = "";
    for(int i = 0; i < s.size(); i++){
        if(t[ptr]==s[i] && ptr != t.size()) {
            ptr++;
        } else preans+=s[i];
    }
    if(ptr < t.size()){
        cout << "Impossible";
    } else {
        string ans = "";
        int ptr = 0;
        int i = 0;
        // cout << preans << " > ";
        priority_queue<char, vector<char>, greater<char>> que;
        while(i < preans.size()) {
            if (ptr < copyt.size() && copyt[ptr] < preans[i]) {
                ans += copyt[ptr];
                ptr++;
                continue;
            }
            if(!que.empty() && que.top() < preans[i]){
                ans += que.top();
                que.pop(); 
                continue; 
            }
            if (ptr < copyt.size() && copyt[ptr] == preans[i]){
                que.push(preans[i]);
                ptr++;
            }
            ans += preans[i];
            i++;
        }
        for(int i = ptr; i < copyt.size(); i++) {
            if(!que.empty() && que.top() < copyt[i]) {
                ans += que.top();
                que.pop();
            }
            ans+=copyt[i];
        }
        while(!que.empty()) { ans += que.top(); que.pop(); }
        cout << ans;
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> T; while(T--) solve();
}