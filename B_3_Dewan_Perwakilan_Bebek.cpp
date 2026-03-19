#include <bits/stdc++.h>
using namespace std;

int t, n, p, q;
const int MAXN = 1e5+5;
long long Q[MAXN];
pair<long long, int> e[MAXN];
int ma[MAXN];

void solve(){
    cin >> n >> p >> q;
    for(int i = 0; i < n; i++){
        long long x; cin >> x;
        e[i] = {x, i};
    }
    for(int i = 0; i < q; i++){ cin >> Q[i]; }
    sort(e, e+n, [](auto&a, auto&b){return a.first < b.first;});
    for(int i = 0 ; i < n; i++){
        ma[e[i].second] = i;
    }

    for(int k = 0; k < q; k++){
        int ans = 0;
        int indx = ma[Q[k]-1];
        int mi = 0;
        for(int i = indx-1; i >= 0; i--){
            if(e[indx].first - e[i].first <= p) ans++;
            else break;
            mi = i;
        }
        for(int i = indx+1; i < n; i++){
            if(e[i].first - e[mi].first <= p) ans++;
            else break;
        }
        cout << ans + (ans!=0) << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}