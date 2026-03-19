#include <bits/stdc++.h>
using namespace std;

long long t, n, p, q, r, T[100005];

void solve(){
    cin >> p >> q >> r >> n;
    for(int i = 0 ; i < n; i++) {
        cin >> t;
        bool flag = (t%p==0) && (t%q==0) && (t%r==0);
        if(flag) cout << "YA\n";
        else cout << "TIDAK\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}