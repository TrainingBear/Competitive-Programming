#include <bits/stdc++.h>
using namespace std;

int t, n, k;
const int MAXN = 2e5+5;
long d[MAXN], p[MAXN];

void solve(){
    cin >> n >> k;
    int ans = 0;
    for(int i = 0; i< n; i++){
        cin >> p[i];
    }
    for(int i = 0; i < k; i++){
        cin >> d[i];
    }

    sort(p, p+n, greater<int>());
    sort(d, d+k);

    int l = 0;
    for(int i = 0; i < n; i++){
        if(l > k) ans += p[i];
        else {
            for(int j = 0; j < d[l]-1; j++){
                if(i > n) break;
                ans += p[i];
                i++;
            }
            l++;
        }
    }
    cout << ans << '\n';
}

int main(){
    cin >> t; while(t--) solve ();
}