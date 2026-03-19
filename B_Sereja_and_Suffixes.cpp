#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+5;
int n, m, a[MAXN], suffix[MAXN], l[MAXN];

void solve(){
    cin >> n >> m;
    memset(suffix, 0, sizeof(suffix));
    for(int i = 0 ; i < n; i++) cin >> a[i];
    unordered_set<int> reg;
    for(int i = n+1; i > 0; i--){
        suffix[i-1] = suffix[i] + !reg.count(a[i-2]);
        reg.insert(a[i-2]);
    }

    for(int i = 0 ; i < m; i++) {
        int x;
        cin >>x;
        cout << suffix[x] << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}