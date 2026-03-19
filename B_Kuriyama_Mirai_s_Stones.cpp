#include <bits/stdc++.h>
using namespace std;
int const MAXN = 1e5+5;
long long n, a[MAXN], prefa[MAXN], prefb[MAXN];

void solve(){
    memset(prefa, 0, sizeof(prefa));
    memset(prefb, 0, sizeof(prefb));
    cin >> n;
    for(int i = 0 ; i < n; i++) {
        cin >> a[i];
        prefa[i+1] = prefa[i]+a[i];
    }
    sort(a, a+n);
    for(int i = 0 ; i < n; i++){
        prefb[i+1] = prefb[i] + a[i];
    }
    int q;
    cin >> q;
    for(int i = 0 ; i < q; i++){
        int type, l, r;
        cin >> type >> l >> r;
        if(type==1) cout << prefa[r]-prefa[l-1];
        else cout << prefb[r]-prefb[l-1];
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) solve();
}