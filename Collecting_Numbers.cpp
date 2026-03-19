#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 2e5+5;
int n, m, a[MAXN], b[MAXN];

inline void solve(){
    cin >> n;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for(int i = 1; i <= n ; i++) {
        cin >> a[i];
        b[a[i]] = i;
    }
    b[n + 1] = INT_MIN;

        int ans = 1;
        // cout << "Swapping -> " << a[l] << "&" << a[r];
        for(int i = 1; i < n; i++){
            if(b[i] > b[i+1]) ans++;
        }
        cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}