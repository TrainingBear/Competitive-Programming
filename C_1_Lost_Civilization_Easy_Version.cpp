#include <bits/stdc++.h>
using namespace std;

long long n, a[300005];

void solve(){
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }

    int s= 0;
    int ans = 0;
    for(int i = 1; i < n; i++){
        if(a[i] <= a[s] || a[i-1] +1 < a[i]){
            s = i;
            ans++;
        }
    }
    cout << ans+1 << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}