#include <bits/stdc++.h>
using namespace std;

int n, a[16], pref[16], cnt[361];

void solve(){
    cin >> n;
    for(int i = 0; i < n; i++){ cin >> a[i];}

    for(int mask = 0; mask < (1<<n); mask++){
        int sum = 0;
        for(int i = 0; i < n; i++){
            if((mask>>i)&1)
                sum+=a[i];
            else sum -= a[i];
        }
        if (sum % 360 == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}