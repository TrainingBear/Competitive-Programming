#include <bits/stdc++.h>
using namespace std;

int t, n, k;
const int MAXN = 2e5+5;
long p[MAXN], d[MAXN];

void solve(){
    cin >> n >> k;
    long long ans = 0;
    int free = 0;
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    for(int i = 0; i < k; i++){
        cin >> d[i];
    }

    sort(d, d+k);
    sort(p, p+n, greater<int>());

    int j = 0;
    for(int i = 0; i < n; i++){
        if(
            // i > k-1 || 
            j >= k) {
            ans+= p[i];
        }
        else {
            // cout << i << ": " << p[i] << ", ";
            for(int k = 0; k < d[j]-1; k++){
                if(i>=n) break;
                ans += p[i];
                i++;
            }
        }
        j++;
    }
    cout << ans << '\n';
}

int main(){
    cin >> t; while(t--) solve();
}