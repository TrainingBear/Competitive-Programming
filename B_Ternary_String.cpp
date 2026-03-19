#include <bits/stdc++.h>
using namespace std;
string s;
void solve(){cin>>s;
    int n = s.size();
    vector<pair<char, int>> a;
    for(int i = 0; i < n; i++){
        pair<char, int> x = {s[i], 1};
        int r = i+1;
        while(r < n && s[r]==s[i]){
            x.second++;
            r++;
        }
        i = r-1;
        a.push_back(x);
    }
    int ans = INT_MAX;
    for(int i = 0; i+2 < a.size(); i++){
        int q = a[i].first-'0';
        int w = a[i+1].first-'0';
        int r = a[i+2].first-'0';
        if(q+w+r==6){
            ans = min(ans, a[i+1].second+2);
        }
    }

    cout << (ans==INT_MAX? 0: ans) << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}