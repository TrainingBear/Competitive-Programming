#include <bits/stdc++.h>
using namespace std;

int const MAXN = 2e5+5;
long n, a[MAXN];

void solve(){
    cin >>n;
    long long ans = 0;
    int mn = -1;
    int cnt = 0;
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        long x = abs(a[i]);
        ans+=x;
        if(mn==-1 || abs(a[mn]) > x) mn = i;
        if(a[i] < 0) cnt++;
    }
    if(cnt&1){
        ans-=2*abs(a[mn]);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}