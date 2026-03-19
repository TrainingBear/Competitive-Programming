#include <bits/stdc++.h>
using namespace std;

long t, n, m;
const int MAXN = 2e5+5;
long a[MAXN];
bool b[MAXN];

void solve(){
    cin >> n >> m;
    long ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }

    bool cur = 0;
    long step = 0;
    for(int i = 0;i < n; i++){
        long d= a[i]-step;
        if ((d%2!=1 && cur == b[i]) || (d%2 && !cur==b[i])){
            ans += d;
        }
        else{
            ans += d - 1;
        }
        step = a[i];
        cur = b[i];
    }
    ans+= m-a[n-1];
    cout << ans << '\n';
}

int main(){
    cin >> t; while (t--) solve();
}