#include <bits/stdc++.h>
using namespace std;

int t, n, m, a[1005], b[1005];
void solve(){
    cin >> n >> m;
    for(int i = 0; i < n;i++) cin >> a[i];
    for(int i = 0; i < m;i++) cin >> b[i];
    sort(a, a+n);
    sort(b, b+m);

    int i = 0, j = 0;
    int ans = 0;
    while(i < n && j < m){
        if(a[i] == b[j] || a[i]+1 == b[j]){
            ans++;
            j++;
            i++;
        } else if(b[j] < a[i]) j++;
        else i++;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}