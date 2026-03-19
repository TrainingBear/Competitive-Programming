#include <bits/stdc++.h>
using namespace std;

int t, n;
const int MAXN = 2e5+5;
long arr[MAXN], pre[MAXN];

void solve(){
    cin >> n;
    pair<int, long> maxn = pair(0, LONG_MIN);
    for(int i  = 0; i < n; i++){
        cin >> arr[i];
        if(i>=1) {
            pre[i] = max(arr[i], pre[i-1]);
        } else pre[i] = arr[i];
    }

    long ans = 0;

    for(int i = 0; i < n; i+=2){
        long dif = -1;
        if (i > 0) dif = max(dif, arr[i] - pre[i - 1]);

        if (i < n - 1) dif = max(dif, arr[i] - pre[i + 1]);

        ans += dif + 1;
    }

    cout << ans << '\n';
}

int main(){
    cin >> t;
    while(t--) solve();
}