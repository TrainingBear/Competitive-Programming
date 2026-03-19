#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e3+5;
int t, n;
void solve(){
    cin >> n;
    int ans1 = 0, ans2 = 0;
    for(int i = 0 ; i < n; i++){
        int a, b, c; cin >> a >> b >> c;
        ans1 += min(a, min(b, c));
        ans2 += max(a, max(b, c));
    }

    /* for(int i = 0 ; i < n;i++) ans1+=mn[i];
    for(int i = 0 ; i < n;i++) ans2+=mx[i]; */
    cout << ans1 << " " << ans2 << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t; while(t--) solve();
}