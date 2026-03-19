#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    long long a[n][m+2];
    memset(a, 0, sizeof(a));
    pair<long long, int> d[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            long long x;
            cin >> x;
            a[i][j+1] = a[i][j] + x;
        }
        for(long long j = 1; j <= m; j++) a[i][m+1] += a[i][j];
        d[i] = {a[i][m], i};
    }
    sort(d, d+n, [](auto&a, auto&b){return a.first > b.first;});

    long long ans = 0;
    for(int i = 0; i< n;i++){
        int idx = d[i].second;
        ans+= a[idx][m+1];
        ans+=(a[idx][m]*(n*m-((i+1)*m)));
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}