#include <bits/stdc++.h>
using namespace std;

int t, n;
const int MAXN = 2e5+5;
long arr[MAXN];

void solve(){
    cin >> n;
    long long ans = 0;
    bool flag = 0;
    vector<long> odds;
    long long presum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]%2) odds.push_back(arr[i]);
        else ans += arr[i];
    }
    if(odds.size()==0) {
        cout << 0 << '\n';
        return;
    }

    sort(odds.begin(), odds.end());
    for(int i = odds.size()/2; i < odds.size(); i++){
        ans+=odds[i];
    }
    cout << ans << '\n';
}

int main(){
    cin >> t; while(t--) solve();
}