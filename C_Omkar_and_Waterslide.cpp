#include <bits/stdc++.h>
using namespace std;

int const MAXN = 2e5+5;
long long n, a[MAXN];
void solve(){
    cin >> n;
    memset(a, -1, sizeof(a));
    int mx = 0;
    for(int i = 0; i < n ; i++){
        cin >> a[i];
        if(a[mx] < a[i]) mx = i;
    }
    long long ans = 0;
    for(int i = n-1 ; i-1 >= mx ; i--) {
        if(a[i] < a[i-1]){
            ans+=a[i-1]-a[i];
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t; while(t--) solve();
}