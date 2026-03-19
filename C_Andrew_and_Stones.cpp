#include <bits/stdc++.h>
using namespace std;


long long n, a[100005];
void solve(){
    cin >> n;
    for(int i = 0 ; i< n; i++) cin >> a[i];
    long long ans = 0;
    bool flag = 1;
    if(n==3 && a[1]%2) ans = -1;
    else for(int i = 1; i < n-1; i++){
        ans+=(a[i]/2);
        ans+=a[i]%2;
        if(a[i]>=2) flag = 0;
    }
    if(flag) ans = -1;
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}