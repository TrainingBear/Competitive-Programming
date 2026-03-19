#include <bits/stdc++.h>
using namespace std;
#define lli long long int
void solve(){
    int n; cin >> n;
    long long k;
    cin >> k;
    long long x[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    lli l = (k/2)+k%2, r = k/2;
    int ll = 0, rr = n-1;
    int ans = 0;
    bool hip = 1;
    while(ll<=rr && l+r){
        if(x[ll]-l <= 0) {
            ans++;
            l-=x[ll];
            ll++;
        }
        // else {
        //     l-= min(1LL, l);
        //     x[ll] -= min(1LL, x[ll]);
        // }
        if(x[rr]-r <= 0){
            ans++;
            r-=x[rr];
            rr--;
        }
        // else{
            // r-=min(r, 1LL);
            // x[rr]-=min(1LL, x[rr]);
        // }
        k = l + r;
        l = (k/2)+k%2, r = k/2;
    }
    cout << ans << '\n';
}
int main(){;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;cin >> t;
    while(t--) solve();
}
