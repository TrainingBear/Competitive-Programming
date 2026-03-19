#include <bits/stdc++.h>
using namespace std;

long t, n, m, k;
long a[55], b[55];
// pair<long, int> a[55], b[55];

inline void solve(){
    cin >> n >> m >> k;
    int x, y;
    x = y= 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < a[x]) x = i;
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
        if(b[i] > b[y]) y = i;
    }

    k--;
    if (a[x] < b[y])
        swap(a[x], b[y]);
    if(k&1){
        x=0;y=0;
        for(int i = 0; i < n; i++) if(a[i] > a[x])x = i;
        for(int i = 0; i < m; i++) if(b[i] < b[y]) y=i;
        swap(a[x], b[y]);
    }
    long long ans = 0;
    for(int i = 0; i < n; i++) ans+=a[i];
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> t;while(t--)solve();
}