#include <bits/stdc++.h>
using namespace std;

int n, a[105];

void solve(){
    cin >> n;
    bool flag = 0;
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        if(i && a[i-1] > a[i]) flag =1;
    }
    if(flag) cout << 1;
    else cout << n;
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}