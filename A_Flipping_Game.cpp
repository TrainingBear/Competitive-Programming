#include <bits/stdc++.h>
using namespace std;

int n, a[105], pref_0[105], pref_1[105];

void solve(){
    cin >> n;
    int cur = 0, sum = 0, mx = -1;
    for(int i =0 ; i < n; i++){
        int t; cin >> t;
        cur+=1-2*t;
        sum+=t;
        mx = max(mx, cur);
        if(cur <0) cur = 0;
    }
    cout << sum+mx << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}